#include "part02.h"

#include <iostream>
#include <regex>

#include "part01.h"

namespace part02 {

int32_t Part02(std::string instructions) {
  int32_t total = 0;
  instructions = "do()" + instructions + "don't()";

  std::regex pattern(
      "(do\\(\\))|(don't\\(\\))|(mul\\((\\d{1,3}),(\\d{1,3})\\))");
  std::sregex_iterator it(instructions.begin(), instructions.end(), pattern);
  std::sregex_iterator end;

  bool accumulate = true;
  for (std::smatch match = *it; it != end; match = *++it) {
    if (match[0] == "do()") {
      accumulate = true;
    } else if (match[0] == "don't()") {
      accumulate = false;
    } else if (accumulate) {
      total += std::stoi(match[4]) * std::stoi(match[5]);
    }
  }

  return total;
}

}  // namespace part02
