#include "generated.h"
#include "tree.h"
#include <cstdio>
#include <iostream>

#define LENGTH(x) (sizeof(x) / sizeof((x)[0]))

void random_bytes(std::uint8_t *bytes, std::size_t len) {
  for (std::size_t i = 0; i < len; i++) {
    bytes[i] = rand() % 256;
  }
}

int main() {
  srand(69);

  std::uint8_t bytes[8];
  std::size_t bytes_len = LENGTH(bytes);
  random_bytes(bytes, bytes_len);

  std::cout << "bytes:  ";
  for (std::size_t i = 0; i < bytes_len; i++) {
    std::cout << (int)bytes[i] << " ";
  }
  std::cout << std::endl;

  // using a vector and not a queue because we need to access random elements
  std::vector<Node *> queue;
  quick_lint_js::Linked_Bump_Allocator allocator("test");

  ProducerStmtList *root_stmt_list = allocator.new_object<ProducerStmtList>();
  queue.push_back(root_stmt_list);

  for (std::size_t i = 0; i < bytes_len; i++) {
    std::cout << "iteration " << i << " queue size:  " << queue.size()
              << std::endl;

    queue[0]->produce(bytes[i], allocator, queue);
    queue.erase(queue.begin());
  }

  std::cout << "queue size after loop:  " << queue.size() << std::endl;

  while (queue.size() > 0) {
    queue[0]->produceDefault(allocator);
    queue.erase(queue.begin());
  }

  std::cout << "----------------------------------------"
               "----------------------------------------"
            << std::endl;

  std::stringstream out;
  root_stmt_list->render(out);
  std::cout << out.str() << std::endl;

  return 0;
}
