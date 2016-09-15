#ifndef FIBONACCI_FIBONACCI_H
#define FIBONACCI_FIBONACCI_H

#include <vector>
#include <cstdint>

/**
 * Produce a list of Fibonacci numbers, only including Even numbers, and only including numbers under the provided cutoff value
 * @param cutoff The cutoff value that produced numbers should not exceed
 * @return the list of numbers
 */
const std::vector<uint64_t> produceEvenFibonacciNumbers(const uint64_t cutoff);

/**
 * Produce a sum of Fibonacci numbers, only including Even numbers, and only including numbers under the provided cutoff value
 * @param cutoff The cutoff value that produced numbers should not exceed
 * @return the sum of the numbers
 */
const uint64_t sumEvenFibonacciNumbers(const uint64_t cutoff);
#endif
