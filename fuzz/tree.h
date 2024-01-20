#pragma once

#include <cstdint>
#include <quick-lint-js/container/linked-bump-allocator.h>
#include <quick-lint-js/port/memory-resource.h>
#include <sstream>
#include <vector>

// foo("StmtList",
//     [
//       Stmt,
//       StmtList "," | Stmt,
//     ], )

#define MAX_CHILDREN 4

class Node {
  //  protected:
 public:
  Node *children[MAX_CHILDREN];
  size_t num_children = 0;
  bool is_default = false;

 public:
  virtual void produce(uint8_t byte, quick_lint_js::Memory_Resource &memory,
                       std::vector<Node *> &queue) = 0;
  virtual void render(std::stringstream &out) = 0;

  void produceDefault(quick_lint_js::Memory_Resource &memory) {
    this->is_default = true;
  }
};

// class Terminal : public Node {
//   const char *name;

//  public:
//   Terminal(const char *name) { this->name = name; }

//   void produce(uint8_t byte, quick_lint_js::Memory_Resource &memory,
//                std::vector<Node *> &queue) {}

//   void render(std::stringstream &out) {
//     if (this->is_default) {
//       out << "\"default terminal\"";
//     } else {
//       out << this->name;
//     }
//   }
// };

// class StmtList : public Node {
//   uint8_t byte;

//  public:
//   void produce(uint8_t byte, quick_lint_js::Memory_Resource &memory,
//                std::vector<Node *> &queue) {
//     this->byte = byte;
//     if (byte < 128) {
//       StmtList *node = memory.new_object<StmtList>();
//       QLJS_ASSERT(this->num_children < MAX_CHILDREN - 1);
//       this->children[this->num_children++] = node;
//       queue.push_back(node);
//     } else {
//       // printf("end reached\n");
//       // QLJS_ASSERT(false);
//     }
//   }

//   void render(std::stringstream &out) {
//     if (this->is_default) {
//       out << "default";
//       return;
//     }

//     if (byte < 128) {
//       out << "StmtList_1(" << (int32_t)this->byte << ": ";
//       this->children[0]->render(out);
//       out << ")";
//     } else {
//       out << "StmtList_2()";
//     }
//   }
// };

// class ProdExpr;
// class ProdValue;
// class ProdOperator;

// class ProdExpr : public Node {
//   uint8_t byte;

//  public:
//   void produce(uint8_t byte, quick_lint_js::Memory_Resource &memory,
//                std::vector<Node *> &queue) {
//     this->byte = byte;
//     if (byte < 128) {
//       {
//         ProdValue *node = memory.new_object<ProdValue>();
//         QLJS_ASSERT(this->num_children < MAX_CHILDREN - 1);
//         this->children[this->num_children++] = (Node *)node;
//         queue.push_back(node);
//       }
//       {
//         ProdOperator *node = memory.new_object<ProdOperator>();
//         QLJS_ASSERT(this->num_children < MAX_CHILDREN - 1);
//         this->children[this->num_children++] = node;
//         queue.push_back(node);
//       }
//       {
//         ProdValue *node = memory.new_object<ProdValue>();
//         QLJS_ASSERT(this->num_children < MAX_CHILDREN - 1);
//         this->children[this->num_children++] = node;
//         queue.push_back(node);
//       }
//     } else if (byte < 256) {
//       {
//         ProdValue *node = memory.new_object<ProdValue>();
//         QLJS_ASSERT(this->num_children < MAX_CHILDREN - 1);
//         this->children[this->num_children++] = node;
//         queue.push_back(node);
//       }
//     }
//   }
//   void render(std::stringstream &out) {
//     if (this->is_default) {
//       out << "default";
//       return;
//     }
//     if (byte < 128) {
//       this->children[0]->render(out);
//       this->children[1]->render(out);
//       this->children[2]->render(out);
//     } else if (byte < 256) {
//       this->children[0]->render(out);
//     }
//   }
// };

// class ProdValue : public Node {
//   uint8_t byte;

//  public:
//   void produce(uint8_t byte, quick_lint_js::Memory_Resource &memory,
//                std::vector<Node *> &queue) {
//     this->byte = byte;
//     if (byte < 64) {
//     } else if (byte < 128) {
//     } else if (byte < 192) {
//     } else if (byte < 256) {
//     }
//   }
//   void render(std::stringstream &out) {
//     if (this->is_default) {
//       out << "default";
//       return;
//     }
//     if (byte < 64) {
//       out << "1";
//     } else if (byte < 128) {
//       out << "\"String\"";
//     } else if (byte < 192) {
//       out << "true";
//     } else if (byte < 256) {
//       out << "3.";
//       out << "141f";
//     }
//   }
// };

// class ProdOperator : public Node {
//   uint8_t byte;

//  public:
//   void produce(uint8_t byte, quick_lint_js::Memory_Resource &memory,
//                std::vector<Node *> &queue) {
//     this->byte = byte;
//     if (byte < 256) {
//     }
//   }
//   void render(std::stringstream &out) {
//     if (this->is_default) {
//       out << "default";
//       return;
//     }
//     if (byte < 256) {
//       out << "+";
//     }
//   }
// };
