#include "generated.h"
#include "tree.h"
#include <cstdio>
#include <iostream>

int main() {
  printf("running\n");

  quick_lint_js::Linked_Bump_Allocator allocator("test");
  std::vector<Node *> queue;

  ProdExpr *root_stmt_list = allocator.new_object<ProdExpr>();
  root_stmt_list->produce(0, allocator, queue);

  std::cout << "queue size:  " << queue.size() << std::endl;

  queue[0]->produce(70, allocator, queue);
  queue[1]->produce(2, allocator, queue);
  queue[2]->produce(170, allocator, queue);
  queue.erase(queue.begin());
  queue.erase(queue.begin());
  queue.erase(queue.begin());

  std::cout << "queue size:  " << queue.size() << std::endl;

  // queue[0]->produceDefault(allocator);

  while (queue.size() > 0) {
    queue[0]->produceDefault(allocator);
    queue.erase(queue.begin());
  }

  std::stringstream out;
  root_stmt_list->render(out);

  std::cout << out.str() << std::endl;

  return 0;
}
