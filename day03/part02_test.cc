#include "part02.h"

#include <gtest/gtest.h>

namespace part02 {
namespace {

TEST(Part02Test, MulInstructionSucceeds) {
  std::string mul_str = "mul(44,46)";
  EXPECT_EQ(Part02(mul_str), 2024);
}

TEST(Part02Test, MulInstructionsAreAddedTogether) {
  std::string mul_str = "mul(44,46)";
  EXPECT_EQ(Part02(mul_str + mul_str), 4048);
}

TEST(Part02Test, MulInstructionIgnoresCorruption) {
  std::string mul_str =
      "xmul(2,4)&mul[3,7]!^don't()"
      "_mul(5,5)+mul(32,64](mul(11,8)undo()?mul(8,5))";
  EXPECT_EQ(Part02(mul_str), 48);
}

}  // namespace
}  // namespace part02
