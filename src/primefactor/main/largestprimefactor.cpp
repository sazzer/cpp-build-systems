#include "primefactors.h"
#include <algorithm>

/**
 * Generate the single largest of the prime factors of the given number
 * @param input The input number to factorise
 * @return the largest prime factor
 */
const uint64_t generateLargestPrimeFactor(uint64_t input) {
  auto primeFactors = generatePrimeFactors(input);
  return *std::max_element(primeFactors.begin(), primeFactors.end());
}
