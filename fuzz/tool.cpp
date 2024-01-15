
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

int main(int argc, char **argv) {
  if (argc != 2) {
    cerr << "Usage: " << argv[0] << " <corpus file>" << endl;
    return 1;
  }

  // read binary file
  FILE *fp = fopen(argv[1], "rb");
  if (!fp) {
    cerr << "Failed to open file: " << argv[1] << endl;
    return 1;
  }

  fseek(fp, 0, SEEK_END);
  size_t size = ftell(fp);
  fseek(fp, 0, SEEK_SET);

  uint8_t *bytes = new uint8_t[size];
  fread(bytes, 1, size, fp);
  fclose(fp);

  std::stringstream ss;
  generate(bytes, size, ss);

  cout << ss.str() << endl;

  delete[] bytes;

  return 0;
}