#include <gtest/gtest.h>
#include "part01.h"

namespace part01 {
    namespace {

        TEST(Part01Test, ElementsInDifferentOrderHaveNoDistance) {
          std::vector<int> v1 = {1, 2, 3, 4};
          std::vector<int> v2 = {4, 3, 2, 1};

          EXPECT_EQ(Part01(v1, v2), 0);
        }

    } // namespace
} // namespace part01
