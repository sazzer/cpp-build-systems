#include <fibonacci.h>
#include <gtest/gtest.h>

TEST(ProduceFibonacci, correctNumbersUnder100) {
  const auto result = produceEvenFibonacciNumbers(100);
  ASSERT_EQ(3, result.size());
  ASSERT_EQ(2, result[0]);
  ASSERT_EQ(8, result[1]);
  ASSERT_EQ(34, result[2]);
}

TEST(ProduceFibonacci, correctNumbersUnder200) {
  const auto result = produceEvenFibonacciNumbers(200);
  ASSERT_EQ(4, result.size());
  ASSERT_EQ(2, result[0]);
  ASSERT_EQ(8, result[1]);
  ASSERT_EQ(34, result[2]);
  ASSERT_EQ(144, result[3]);
}
