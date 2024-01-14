#pragma once

#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <queue>
#include <sstream>
#include <tuple>
#include <vector>

class Node {
 public:
  virtual void render(std::stringstream &output) = 0;
};

enum class ValueNodeType {
  True,
  False,
  Null,
  Number,
  String,
};
class ValueNode : public Node {
  ValueNodeType type;

 public:
  ValueNode(ValueNodeType type) { this->type = type; }

  void render(std::stringstream &output) {
    switch (type) {
    case ValueNodeType::True:
      output << "true";
      break;
    case ValueNodeType::False:
      output << "false";
      break;
    case ValueNodeType::Null:
      output << "null";
      break;
    case ValueNodeType::Number:
      output << "69";
      break;
    case ValueNodeType::String:
      output << "\"fooBAR\"";
      break;
    }
  }
};

enum class BinaryOperatorType {
  Add = 0,
  Subtract = 1,
  Multiply = 2,
  Divide = 3,
  Modulo = 4,
  Exponentiation = 5,
  Equal = 6,
  NotEqual = 7,
  StrictEqual = 8,
  StrictNotEqual = 9,
  LessThan = 10,
  GreaterThan = 11,
  LessThanOrEqual = 12,
  GreaterThanOrEqual = 13,
  LogicalAnd = 14,
  LogicalOr = 15,
};
class BinaryExprNode : public Node {
  BinaryOperatorType type;
  bool braces;

 public:
  Node *left, *right;

  BinaryExprNode(BinaryOperatorType type, bool braces, Node *left,
                 Node *right) {
    this->type = type;
    this->braces = braces;
    this->left = left;
    this->right = right;
  }

  void render(std::stringstream &output) {
    if (braces) {
      output << "(";
    }
    left->render(output);
    switch (type) {
    case BinaryOperatorType::Add:
      output << " + ";
      break;
    case BinaryOperatorType::Subtract:
      output << " - ";
      break;
    case BinaryOperatorType::Multiply:
      output << " * ";
      break;
    case BinaryOperatorType::Divide:
      output << " / ";
      break;
    case BinaryOperatorType::Modulo:
      output << " % ";
      break;
    case BinaryOperatorType::Exponentiation:
      output << " ** ";
      break;
    case BinaryOperatorType::Equal:
      output << " == ";
      break;
    case BinaryOperatorType::NotEqual:
      output << " != ";
      break;
    case BinaryOperatorType::StrictEqual:
      output << " === ";
      break;
    case BinaryOperatorType::StrictNotEqual:
      output << " !== ";
      break;
    case BinaryOperatorType::LessThan:
      output << " < ";
      break;
    case BinaryOperatorType::GreaterThan:
      output << " > ";
      break;
    case BinaryOperatorType::LessThanOrEqual:
      output << " <= ";
      break;
    case BinaryOperatorType::GreaterThanOrEqual:
      output << " >= ";
      break;
    case BinaryOperatorType::LogicalAnd:
      output << " && ";
      break;
    case BinaryOperatorType::LogicalOr:
      output << " || ";
      break;
    default:
      throw std::runtime_error("unknown binary operator type");
    }
    right->render(output);
    if (braces) {
      output << ")";
    }
  }
};

class Production {
 public:
  virtual std::size_t produce(std::uint8_t *bytes, std::size_t len,
                              std::queue<Production *> &queue) = 0;
  virtual void produceBaseCase() = 0;
};

class ExprProduction : public Production {
  Node **target;

 public:
  ExprProduction(Node **target) { this->target = target; }

  std::size_t produce(std::uint8_t *bytes, std::size_t len,
                      std::queue<Production *> &queue) {
    auto value = bytes[0];
    if (value < 10) {
      *target = new ValueNode(ValueNodeType::True);
      return 1;
    } else if (value < 20) {
      *target = new ValueNode(ValueNodeType::False);
      return 1;
    } else if (value < 30) {
      *target = new ValueNode(ValueNodeType::Null);
      return 1;
    } else if (value < 40) {
      *target = new ValueNode(ValueNodeType::Number);
      return 1;
    } else if (value < 50) {
      *target = new ValueNode(ValueNodeType::String);
      return 1;
    } else {
      std::uint8_t op = value % 16;  // Todo: hard coded value
      BinaryOperatorType type = static_cast<BinaryOperatorType>(op);
      bool braces = value % 3 == 0;  // Todo: hard coded value

      auto node = new BinaryExprNode(type, braces, nullptr, nullptr);
      *target = node;
      queue.push(new ExprProduction(&node->left));
      queue.push(new ExprProduction(&node->right));
      return 1;
    }
  }

  void produceBaseCase() {
    auto r = rand() % 5;  // Todo: hard coded value
    ValueNodeType type = static_cast<ValueNodeType>(r);
    auto node = new ValueNode(type);
    *target = node;
  }
};

void generate(std::uint8_t *bytes, std::size_t len) {
  std::queue<Production *> queue;

  Node *root;
  ExprProduction expr(&root);
  std::size_t consumed = expr.produce(bytes, len, queue);

  while (len > consumed) {
    if (queue.empty()) {
      std::cerr << "finished prematurely" << std::endl;
      break;
    }

    Production *p = queue.front();
    queue.pop();

    std::uint8_t *remaining = bytes + consumed;
    consumed += p->produce(remaining, len - consumed, queue);
  }

  // cout << "consumed:   " << consumed << endl;
  // cout << "queue size: " << queue.size() << endl;

  // iterate queue
  while (!queue.empty()) {
    Production *p = queue.front();
    queue.pop();
    p->produceBaseCase();
  }

  std::stringstream rendered;
  root->render(rendered);
  std::cout << rendered.str() << ";" << std::endl;
}

/**

statement := if_statement
           | code_block

if_statement := "if" "(" expression ")" statement
code_block := "{" { statement } "}"
expression := "true"
            | "false"
            | "!" expression
            | expression ( "&&" | "||" ) expression
            | expression "||" expression


value := 0-9      "true"
       | 10-19    "false"
       | 20-39    "null"
       | 40-149   number
       | 150-255  string

binary_operators := "+" | "-" | "*" | "/" | "%" | "==" | "!=" | "===" | "!==" |
"<" | ">" | "<=" | ">=" | "&&" | "||"

binary_expression := 0-10   value
                   | 11-255 binary_expression binary_operators binary_expression

 */
/**
1 + 33;
"da";
"hel" + "lo";
"hello" + 1 * 32 && 8;

1 2 3 4 5 6 ....^ -path range first application.If not enough->default value

                   8;

ProductionQueue q;

*/

/**

queue.add(baseProduction)

while (bytes left > 0) {
    current <- queue.next()
    [bytesUsed, newProductions] = current.produce(bytes)
    bytes += bytesUsed
    queue.add(...newProductions)
}

foreach (production in queue) {
    production.produceBaseCase()
}




 */
