#include "fibonacci.h"
#include <numeric>

/**
 * Helper to check if a given number is Even or not
 * @param input The input number to check
 * @return True if the number is even. False if not
 */
auto isEven(const uint64_t input) {
  return (input % 2) == 0;
}

/**
 * Produce a list of count Fibonacci numbers, only including Even numbers, and only including numbers under the provided cutoff value
 * @param cutoff The cutoff value that produced numbers should not exceed
 * @return the list of numbers
 */
const std::vector<uint64_t> produceEvenFibonacciNumbers(const uint64_t cutoff) {
  std::vector<uint64_t> result;
  uint64_t n1 = 1;
  uint64_t n2 = 1;
  while (n2 <= cutoff) {
    uint64_t next = n1 + n2;
    if (isEven(next) && next <= cutoff) {
      result.push_back(next);
    }
    n1 = n2;
    n2 = next;
  }
  return result;
}

/**
 * Produce a sum of Fibonacci numbers, only including Even numbers, and only including numbers under the provided cutoff value
 * @param cutoff The cutoff value that produced numbers should not exceed
 * @return the sum of the numbers
 */
const uint64_t sumEvenFibonacciNumbers(const uint64_t cutoff) {
  auto numbers = produceEvenFibonacciNumbers(cutoff);
  uint64_t sum = std::accumulate(numbers.begin(), numbers.end(), 0);

  return sum;
}
