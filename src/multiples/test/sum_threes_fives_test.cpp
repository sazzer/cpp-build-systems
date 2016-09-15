#include <multiples.h>
#include <gtest/gtest.h>

TEST(SumThreesOrFives, correctNumbersUnder10) {
  const auto result = sumThreesOrFives(10);
  ASSERT_EQ(23, result);
}

TEST(SumThreesOrFives, correctNumbersUnder20) {
  const auto result = sumThreesOrFives(20);
  ASSERT_EQ(78, result);
}
