import json
import os

SCRIPT_DIR = os.path.dirname(os.path.realpath(__file__))
GRAMMAR_FILE_PATH = os.path.join(SCRIPT_DIR, "grammar.json")
HEADER_FILE_NAME = "generated.h"
OUTPUT_FILE_PATH_HEADER = os.path.join(SCRIPT_DIR, HEADER_FILE_NAME)
OUTPUT_FILE_PATH_CPP = os.path.join(SCRIPT_DIR, "generated.cpp")

NOTE = """/************************************************/
/* This file was autogenerated by create_cpp.py */
/************************************************/"""

max_child_count = 0

DEBUG_BYTE_CONSUMED = True

class Symbol:
    def __init__(self, symbol):
        self.symbol = symbol.replace('"', '\\"')
        self.is_terminal = self.symbol.startswith("::")
        if (self.is_terminal):
            self.symbol = self.symbol[2:]

    def __repr__(self):
        return self.symbol


class SymbolList:
    def __init__(self, symbols):
        self.symbols = [Symbol(symbol) for symbol in symbols]

    def __repr__(self):
        return "(" + " ".join([symbol.symbol for symbol in self.symbols]) + ")"

    def __iter__(self):
        return iter(self.symbols)


class Production:
    def __init__(self, name, rules):
        self.name = name
        self.rules = [SymbolList(symbols) for symbols in rules]

    def __repr__(self):
        return f"{self.name} -> {self.rules}"


def make_class_name(production):
    return f"Producer{production.name}"

PRODUCE_ARGS = "uint8_t byte, quick_lint_js::Memory_Resource &memory, std::vector<Node *> &queue"
RENDER_ARGS = "std::stringstream &out";

def make_class_definition(production):
    class_name = make_class_name(production)
    # head
    res = [
        f"class {class_name} : public Node {{",
        f"uint8_t byte;",
        f"public:",
    ]

    res.append(f"void produce({PRODUCE_ARGS});")
    res.append(f"void render({RENDER_ARGS});")

    # tail
    res.append("};")
    return res


def make_class_implementation(production):
    class_name = make_class_name(production)
    values = evenly_spaced_values(len(production.rules))
    res = []

    # --- produce() ---
    res.append(f"void {class_name}::produce({PRODUCE_ARGS}) {{")
    res.append("this->byte = byte;")

    if DEBUG_BYTE_CONSUMED:
        res.append(f"std::cout << \"byte \" << (int)byte << \" consumed in {class_name}\" << std::endl;")

    for symbol_list, value in zip(production.rules, values):
        add_produce_rule(res, value, symbol_list)
        res.append("else")
    res.pop()  # remove last else

    res.append("}")

    # --- render() ---
    res.append(f"void {class_name}::render({RENDER_ARGS}) {{")
    res.append("""
        if (this->is_default) {
            out << "default";
            return;
        }""")

    for symbol_list, value in zip(production.rules, values):
        add_render_rule(res, value, symbol_list)
        res.append("else")
    res.pop()  # remove last else

    res.append("}")

    return res

def add_produce_rule(res, value, symbol_list ):
    res.append(f"if (byte < {value}) {{")
    for symbol in symbol_list:
        if symbol.is_terminal:
            pass # nothing to do, this will be handled directly in the render function
        else:
            class_name = make_class_name(Production(symbol.symbol, []))
            res.append("{") # scope start
            res.append(f"{class_name} *node = memory.new_object<{class_name}>();")
            res.append(f"QLJS_ASSERT(this->num_children < MAX_CHILD_COUNT);")
            res.append(f"this->children[this->num_children++] = node;")
            res.append(f"queue.push_back(node);")
            res.append("}") # scope end
    res.append("}")

def add_render_rule(res, value, symbol_list ):
    res.append(f"if (byte < {value}) {{")
    non_term_count = 0;
    for symbol in symbol_list:
        if symbol.is_terminal:
            res.append(f"out << \"{symbol.symbol}\";")
        else:
            res.append(f"this->children[{non_term_count}]->render(out);")
            non_term_count += 1
    res.append("}")

    global max_child_count
    max_child_count = max(max_child_count, non_term_count)

def evenly_spaced_values(n):
    return [(i + 1) * 256 // n for i in range(n)]

def make_header(productions):
    classes = []
    for production in productions:
        c = make_class_definition(production)
        classes.append(c)

    res = [
        f"#pragma once\n\n",
        f"{NOTE}\n\n",
        '#include "tree.h"\n\n',
    ]

    for c in classes:
        res.append("\n".join(c))
        res.append("\n\n")

    return "\n".join(res)

def make_implementation(productions):
    classes = []
    for production in productions:
        c = make_class_implementation(production)
        classes.append(c)

    res = [
        f"{NOTE}\n\n",
        f'#include "{HEADER_FILE_NAME}"\n\n',
        f"#define MAX_CHILD_COUNT {max_child_count}\n\n",
    ]

    if DEBUG_BYTE_CONSUMED:
        res.append('#include <iostream>\n\n');

    for c in classes:
        res.append("\n".join(c))
        res.append("\n\n")

    return "\n".join(res)


def main():
    with open(GRAMMAR_FILE_PATH, "r") as grammar_file:
        grammar_file = json.load(grammar_file)

    g = grammar_file["productions"]
    productions = [Production(x["name"], x["rules"]) for x in g]

    header = make_header(productions)
    implementation = make_implementation(productions)

    with open(OUTPUT_FILE_PATH_HEADER, "w") as output_file:
        output_file.write(header)

    with open(OUTPUT_FILE_PATH_CPP, "w") as output_file:
        output_file.write(implementation)


if __name__ == "__main__":
    main()
