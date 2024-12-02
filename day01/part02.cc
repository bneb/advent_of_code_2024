#include <cmath>
#include <map>
#include <vector>

namespace part02 {

  int32_t Part02(std::vector<int32_t> v1, std::vector<int32_t> v2) {
    std::map<int32_t, int32_t> histogram;
    for (int n: v2) {
      histogram[n]++;
    }

    int32_t d = 0;
    for (int n: v1) {
      d += n*histogram[n];
    }

    return d;
  }

} // namespace part02
