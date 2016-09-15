#include <primefactors.h>
#include <gtest/gtest.h>

TEST(LargestPrimeFactor, primeFactors10) {
  ASSERT_EQ(5, generateLargestPrimeFactor(10));
}

TEST(LargestPrimeFactor, primeFactors13195) {
  ASSERT_EQ(29, generateLargestPrimeFactor(13195));
}
