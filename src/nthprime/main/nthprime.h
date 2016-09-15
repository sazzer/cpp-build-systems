#ifndef NTHPRIME_NTHPRIME_H
#define NTHPRIME_NTHPRIME_H

#include <cstdint>

/**
 * Generate the Nth prime number, starting from 0. The first prime number is 2, the 5th is 11, and so on.
 * @param n The index of the prime number to calculate
 * @return the nth prime number
 */
uint64_t generateNthPrime(uint16_t n);

#endif
