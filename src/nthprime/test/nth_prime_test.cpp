#include <nthprime.h>
#include <gtest/gtest.h>

TEST(NthPrime, nthPrime1) {
  ASSERT_EQ(2, generateNthPrime(1));
}

TEST(NthPrime, nthPrime5) {
  ASSERT_EQ(11, generateNthPrime(5));
}

TEST(NthPrime, nthPrime15) {
  ASSERT_EQ(47, generateNthPrime(15));
}
