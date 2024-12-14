#include "part01.h"

#include <regex>

namespace part01 {

int32_t Part01(std::string instructions) {
  int32_t total = 0;

  std::regex pattern("mul\\((\\d{1,3}),(\\d{1,3})\\)");
  std::sregex_iterator it(instructions.begin(), instructions.end(), pattern);
  std::sregex_iterator end;

  for (std::smatch match = *it; it != end; match = *(++it)) {
    total += std::stoi(match[1]) * std::stoi(match[2]);
  }

  return total;
}

}  // namespace part01
