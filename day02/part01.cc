#include <cmath>
#include <vector>
#include <iostream>

namespace part01 {

int32_t Part01(std::vector<std::vector<int32_t>> number_lists) {
  int32_t count = 0;

  for (auto numbers: number_lists) {
    // Start assuming that count should be incremented.
    count++;

    if (numbers.size() < 2) {
      continue;
    }

    int32_t sign = (numbers[1] > numbers[0] ? 1 : -1);
    for (int i=1; i < numbers.size(); i++) {
      int32_t delta = numbers[i] - numbers[i-1];
      if (sign*delta < 1 || sign*delta > 3) {
        count--;
        break;
      }
    }
  }

  return count;
}

} // namespace part01
