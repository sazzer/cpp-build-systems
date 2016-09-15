#ifndef MULTIPLES_MULTIPLES_H
#define MULTIPLES_MULTIPLES_H

#include <vector>
#include <cstdint>

/**
 * Produce a list of numbers that are multiples of either 3 or 5, and only including numbers under the provided cutoff value
 * @param cutoff The cutoff value that produced numbers should not exceed
 * @return the list of numbers
 */
const std::vector<uint64_t> produceThreesOrFives(const uint64_t cutoff);

/**
 * Produce a sum of numbers that are multiples of either 3 or 5, and only including numbers under the provided cutoff value
 * @param cutoff The cutoff value that produced numbers should not exceed
 * @return the sum of the numbers
 */
const uint64_t sumThreesOrFives(const uint64_t cutoff);
#endif
