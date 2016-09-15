#include "isprime.h"

#include <cmath>

/**
 * Check if the given input value is a Prime number or not
 * @param input The input to Check
 * @return True if the input is Prime. False if not
 */
bool isPrime(uint64_t input) {
  uint64_t upper = sqrt(input);
  bool foundDivisor = false;
  for (uint64_t i = 2; i <= upper && !foundDivisor; ++i) {
    foundDivisor = ((input % i) == 0);
  }
  return !foundDivisor;
}
