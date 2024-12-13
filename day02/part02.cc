#include <cmath>
#include <vector>
#include <iostream>

namespace part02 {
namespace {

std::vector<int32_t> GetVectorWithoutItem(std::vector<int32_t> v, int32_t ix) {
  std::vector<int32_t> subv;
  subv.reserve(v.size());

  for(int i=0; i<v.size(); i++) {
    if (i != ix) subv.push_back(v[i]);
  }

  return subv;
}

// Returns true if the list is decreasing/increasing apart from one element.
bool IsListSafe(std::vector<int32_t> numbers, bool had_oopsie_already=false) {
  if (numbers.size() < 2) return true;

  int32_t sign = (numbers[1] > numbers[0] ? 1 : -1);
  for (int i=1; i < numbers.size(); i++) {
    int32_t delta = numbers[i] - numbers[i-1];
    if (sign*delta < 1 || sign*delta > 3) {
      if (had_oopsie_already) return false;
      if (i == 2 && IsListSafe(GetVectorWithoutItem(numbers, 0), true)) {
        return true;
      }
      return IsListSafe(GetVectorWithoutItem(numbers, i-1), true) ||
        IsListSafe(GetVectorWithoutItem(numbers, i), true);
    }
  }

  return true;
}

}

int32_t Part02(std::vector<std::vector<int32_t>> number_lists) {
  int32_t count = 0;

  for (auto numbers: number_lists) {
    if (IsListSafe(numbers)) {
      count++;
    }
  }

  return count;
}

} // namespace part02
