#include <iostream>
#include <vector>

#include "part01.h"
#include "part02.h"

int32_t main(int32_t argc, char **argv) {
  std::cout << "\\ Day03" << std::endl;

  std::string str;
  std::string instructions = "";

  while (std::getline(std::cin, str)) {
    instructions += str + "\n";
  }

  int32_t result1 = part01::Part01(instructions);
  int32_t result2 = part02::Part02(instructions);

  std::cout << " \\  Part01 --- Result: " << result1 << std::endl;
  std::cout << "  \\ Part02 --- Result: " << result2 << std::endl;

  return 0;
}
