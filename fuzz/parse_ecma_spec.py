import sys
from bs4 import BeautifulSoup
from pprint import pprint
import json


def main():
    if len(sys.argv) != 2:
        print("Usage: python parse_ecma_spec.py <ecma_spec_file>")
        exit(1)

    ecma_spec_file = sys.argv[1]

    with open(ecma_spec_file, "r") as f:
        html = f.read()

    soup = BeautifulSoup(html, "html.parser")
    grammar_summary = soup

    # grammar_summary = soup.find(id="sec-grammar-summary")
    # with open("grammar_summary.html", "w") as f:
    #     f.write(str(grammar_summary))

    lexical_grammar = grammar_summary.find(id="sec-lexical-grammar")
    parsed = parse_grammar_summary_subsection(lexical_grammar)
    # pprint(parsed)
    j = generate_json(parsed)
    print(j)


def generate_json(parsed):
    res = []
    for production in parsed:
        res.append(
            {
                "name": production.name,
                "rules": [
                    {"bias": 1.0, "rule": symbols}
                    for symbols in production.right_hand_sides
                ],
                "default": "::/* TODO: */",
            }
        )

    obj = {"productions": res}
    return json.dumps(obj, indent=2)


def parse_grammar_summary_subsection(subsection):
    productions = subsection.find_all("emu-production")
    # result = []
    # for production in productions:
    #     result.append(parse_production(production))

    result = [
        parse_production(productions[1]),
        parse_production(productions[6]),
        parse_production(productions[7]),
        parse_production(productions[8]),
        parse_production(productions[9]),
        parse_production(productions[10]),
        parse_production(productions[11]),
    ]
    return result


def parse_production(production):
    name = production.attrs["name"]
    type = production.attrs["type"]

    right_hand_sides = production.find_all("emu-rhs")
    if len(right_hand_sides) == 0:
        raise Exception("No RHS found")

    idents = [get_symbols(rhs) for rhs in right_hand_sides]

    return Production(name, type, idents)


def get_symbols(rhs):
    xs = rhs.find_all(["emu-t", "emu-nt", "emu-gprose"])
    return [symbol_to_grammar_string(x) for x in xs]


CHARACTER_MAP = {
    "TAB": "\\u0009",
    "VT": "\\u000B",
    "FF": "\\u00FF",
    "ZWNBSP": "\\uFEFF",
    "USP": " ",  # Todo: needs to be implemented properly
    "LF": "\\u000A",
    "CR": "\\u000D",
    "LS": "\\u2028",
    "PS": "\\u2029",
}


def symbol_to_grammar_string(symbol):
    text = symbol.text.strip()
    if symbol.name == "emu-t":
        return "::" + text
    elif symbol.name == "emu-gprose":
        assert text[0] == "<" and text[-1] == ">"
        text = text[1:-1]
        if text in CHARACTER_MAP:
            return "::" + CHARACTER_MAP[text]
        else:
            raise Exception(f"Unknown character: {text}")
    else:
        return text


class Production:
    def __init__(self, name, type, right_hand_sides):
        self.name = name
        self.type = type
        self.right_hand_sides = right_hand_sides

    def __repr__(self):
        return f"Production({self.name}, {self.type}, {self.right_hand_sides})"


if __name__ == "__main__":
    main()
