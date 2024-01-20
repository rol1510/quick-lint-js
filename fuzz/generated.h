#pragma once


/************************************************/
/* This file was autogenerated by create_cpp.py */
/************************************************/


#include "tree.h"


class ProducerStmtList : public Node {
uint8_t byte;
public:
void produce(uint8_t byte, quick_lint_js::Memory_Resource &memory, std::vector<Node *> &queue);
void render(std::stringstream &out);
};



class ProducerStmt : public Node {
uint8_t byte;
public:
void produce(uint8_t byte, quick_lint_js::Memory_Resource &memory, std::vector<Node *> &queue);
void render(std::stringstream &out);
};



class ProducerExpr : public Node {
uint8_t byte;
public:
void produce(uint8_t byte, quick_lint_js::Memory_Resource &memory, std::vector<Node *> &queue);
void render(std::stringstream &out);
};



class ProducerValue : public Node {
uint8_t byte;
public:
void produce(uint8_t byte, quick_lint_js::Memory_Resource &memory, std::vector<Node *> &queue);
void render(std::stringstream &out);
};



class ProducerOperator : public Node {
uint8_t byte;
public:
void produce(uint8_t byte, quick_lint_js::Memory_Resource &memory, std::vector<Node *> &queue);
void render(std::stringstream &out);
};


