#include <gtest/gtest.h>
#include "part01.h"

namespace part01 {
    namespace {

        TEST(Part01Test, ListsWithStepsFromNegativeFourToFourOnlyCountsForSix) {
          std::vector<std::vector<int32_t>> number_lists = {
            {9, 6, 3}, {6, 4, 2}, {3, 2, 1}, {1, 1, 1}, {1, 2, 3}, {2, 4, 6}, {3, 6, 9}
          };
          EXPECT_EQ(Part01(number_lists), 6);
        }

    } // namespace
} // namespace part01
