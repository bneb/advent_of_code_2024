#include <gtest/gtest.h>
#include "part02.h"

namespace part02 {
    namespace {

        TEST(Part02Test, ListsWithStepsFromNegativeFourToFourOnlyCountsForSix) {
          std::vector<std::vector<int32_t>> number_lists = {
            {9, 6, 3}, {6, 4, 2}, {3, 2, 1}, {1, 1, 1}, {1, 2, 3}, {2, 4, 6}, {3, 6, 9}
          };
          EXPECT_EQ(Part02(number_lists), 0);
        }

    } // namespace
} // namespace part02
