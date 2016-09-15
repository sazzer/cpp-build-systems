#include <fibonacci.h>
#include <gtest/gtest.h>

TEST(SumFibonacci, correctNumbersUnder100) {
  const auto result = sumEvenFibonacciNumbers(100);
  ASSERT_EQ(44, result);
}

TEST(SumFibonacci, correctNumbersUnder200) {
  const auto result = sumEvenFibonacciNumbers(200);
  ASSERT_EQ(188, result);
}
