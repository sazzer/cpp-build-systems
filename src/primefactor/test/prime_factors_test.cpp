#include <primefactors.h>
#include <gtest/gtest.h>

TEST(GeneratePrimeFactors, primeFactors10) {
  auto primeFactors = generatePrimeFactors(10);
  ASSERT_EQ(2, primeFactors.size());
  ASSERT_EQ(2, primeFactors[0]);
  ASSERT_EQ(5, primeFactors[1]);
}

TEST(GeneratePrimeFactors, primeFactors13195) {
  auto primeFactors = generatePrimeFactors(13195);
  ASSERT_EQ(4, primeFactors.size());
  ASSERT_EQ(5, primeFactors[0]);
  ASSERT_EQ(7, primeFactors[1]);
  ASSERT_EQ(13, primeFactors[2]);
  ASSERT_EQ(29, primeFactors[3]);
}
