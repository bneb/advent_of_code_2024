#include <gtest/gtest.h>
#include "part02.h"

namespace part02 {
    namespace {

        TEST(Part02Test, ElementsInDifferentOrderHaveNoDistance) {
          std::vector<int> v1 = {1, 2, 3, 4};
          std::vector<int> v2 = {4, 4, 9, 1};

          EXPECT_EQ(Part02(v1, v2), 9);
        }

    } // namespace
} // namespace part02
