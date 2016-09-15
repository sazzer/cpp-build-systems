#include <isprime.h>
#include <gtest/gtest.h>

TEST(IsPrime, IsPrime2) {
  ASSERT_TRUE(isPrime(2));
}

TEST(IsPrime, IsPrime3) {
  ASSERT_TRUE(isPrime(3));
}

TEST(IsPrime, IsNotPrime4) {
  ASSERT_FALSE(isPrime(4));
}
