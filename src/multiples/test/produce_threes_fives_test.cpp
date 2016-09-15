#include <multiples.h>
#include <gtest/gtest.h>

TEST(ProduceThreesOrFives, correctNumbersUnder10) {
  const auto result = produceThreesOrFives(10);
  ASSERT_EQ(4, result.size());
  ASSERT_EQ(3, result[0]);
  ASSERT_EQ(5, result[1]);
  ASSERT_EQ(6, result[2]);
  ASSERT_EQ(9, result[3]);
}

TEST(ProduceThreesOrFives, correctNumbersUnder20) {
  const auto result = produceThreesOrFives(20);
  ASSERT_EQ(8, result.size());
  ASSERT_EQ(3, result[0]);
  ASSERT_EQ(5, result[1]);
  ASSERT_EQ(6, result[2]);
  ASSERT_EQ(9, result[3]);
  ASSERT_EQ(10, result[4]);
  ASSERT_EQ(12, result[5]);
  ASSERT_EQ(15, result[6]);
  ASSERT_EQ(18, result[7]);
}
