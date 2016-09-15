#include "primefactors.h"
#include <isprime.h>

/**
 * Generate a list of all of the prime factors of the given number
 * @param input The input number to factorise
 * @return the prime factors
 */
const std::vector<uint64_t> generatePrimeFactors(uint64_t input) {
  std::vector<uint64_t> result;
  uint64_t upper = input/2;
  for (uint64_t i = 2; i <= upper; ++i) {
    if ((input % i == 0) && isPrime(i)) {
      result.push_back(i);
    }
  }
  return result;
}
