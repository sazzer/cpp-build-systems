#include "multiples.h"
#include <numeric>

/**
 * Helper to check if a given number is divisible by the given divisor
 * @param input The input number to check
 * @param divisor The divisor to check
 * @return True if the number is divisble by the divisor. False if not
 */
auto isDivisibleBy(const uint64_t input, const uint64_t divisor) {
  return (input % divisor) == 0;
}

/**
 * Produce a list of numbers that are multiples of either 3 or 5, and only including numbers under the provided cutoff value
 * @param cutoff The cutoff value that produced numbers should not exceed
 * @return the list of numbers
 */
const std::vector<uint64_t> produceThreesOrFives(const uint64_t cutoff) {
  std::vector<uint64_t> result;
  for (uint64_t i = 1; i < cutoff; ++i) {
    if (isDivisibleBy(i, 3) || isDivisibleBy(i, 5)) {
      result.push_back(i);
    }
  }
  return result;
}

/**
 * Produce a sum of numbers that are multiples of either 3 or 5, and only including numbers under the provided cutoff value
 * @param cutoff The cutoff value that produced numbers should not exceed
 * @return the sum of the numbers
 */
const uint64_t sumThreesOrFives(const uint64_t cutoff) {
  auto numbers = produceThreesOrFives(cutoff);
  uint64_t sum = std::accumulate(numbers.begin(), numbers.end(), 0);

  return sum;
}
