#include <cmath>
#include <vector>

namespace part01 {

  int32_t Part01(std::vector<int32_t> v1, std::vector<int32_t> v2) {
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int32_t d = 0;

    for(int32_t i=0; i < v1.size(); i++) {
      d += abs(v1[i] - v2[i]);
    }

    return d;
  }

} // namespace part01
