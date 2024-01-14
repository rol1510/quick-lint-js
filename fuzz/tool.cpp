
#include "fuzzer.h"
#include <cstdlib>
#include <iostream>

using namespace std;

#define LENGTH(x) (sizeof(x) / sizeof((x)[0]))

void random_bytes(std::uint8_t *bytes, std::size_t len) {
  for (std::size_t i = 0; i < len; i++) {
    bytes[i] = rand() % 256;
  }
}

int main() {
  // ValueNode t(ValueNodeType::True);
  // ValueNode f(ValueNodeType::False);
  // BinaryExprNode node(BinaryOperatorType::LogicalAnd, &t, &f);
  // BinaryExprNode node2(BinaryOperatorType::LogicalOr, &node, &f);

  // std::uint8_t bytes[] = {25, 5, 23, 12, 12};
  // std::size_t len = LENGTH(bytes);

  std::uint8_t bytes[20];
  std::size_t len = LENGTH(bytes);

  for (std::size_t i = 0; i < 10000; i++) {
    std::srand(69 + i);
    random_bytes(bytes, len);

    // // print bytes
    // cout << "bytes: ";
    // for (std::size_t i = 0; i < len; i++) {
    //   cout << (int)bytes[i] << " ";
    // }
    // cout << endl;

    generate(bytes, len);
  }

  return 0;
}