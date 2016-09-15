#ifndef PRIMEFACTOR_PRIMEFACTORS_H
#define PRIMEFACTOR_PRIMEFACTORS_H

#include <vector>
#include <cstdint>

/**
 * Generate a list of all of the prime factors of the given number
 * @param input The input number to factorise
 * @return the prime factors
 */
const std::vector<uint64_t> generatePrimeFactors(uint64_t input);

/**
 * Generate the single largest of the prime factors of the given number
 * @param input The input number to factorise
 * @return the largest prime factor
 */
const uint64_t generateLargestPrimeFactor(uint64_t input);

#endif
