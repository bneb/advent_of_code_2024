#include "part01.h"

#include <gtest/gtest.h>

namespace part01 {
namespace {

TEST(Part01Test, MulInstructionSucceeds) {
  std::string mul_str = "mul(44,46)";
  EXPECT_EQ(Part01(mul_str), 2024);
}

TEST(Part01Test, MulInstructionsAreAddedTogether) {
  std::string mul_str = "mul(44,46)";
  EXPECT_EQ(Part01(mul_str + mul_str), 4048);
}

TEST(Part01Test, MulInstructionIgnoresCorruption) {
  std::string mul_str =
      "xmul(2,4)%&mul[3,7]!@^do_not_mul(5,5)+mul(32,64]then(mul(11,8)mul(8,5))";
  EXPECT_EQ(Part01(mul_str), 161);
}

}  // namespace
}  // namespace part01
