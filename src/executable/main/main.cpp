#include <fibonacci.h>
#include <multiples.h>
#include <nthprime.h>
#include <primefactors.h>
#include <iostream>
#include <boost/date_time/posix_time/posix_time.hpp>

/**
 * Get the current time, as a string
 * @return the current time
 */
auto currentTime() {
  auto today = boost::posix_time::second_clock::local_time();
  return boost::posix_time::to_simple_string(today);
}

int main(void) {
  std::cout << "Challenge 1: Multiples of 3 and 5" << std::endl;
  std::cout << "Start: " << currentTime() << std::endl;
  std::cout << "Sum of multiples of 3 and 5 under 1000: " << sumThreesOrFives(1000) << std::endl;
  std::cout << "End: " << currentTime() << std::endl;
  std::cout << std::endl;

  std::cout << "Challenge 2: Even Fibonacci numbers" << std::endl;
  std::cout << "Start: " << currentTime() << std::endl;
  std::cout << "Sum of even fibonacci numbers under 4,000,000: " << sumEvenFibonacciNumbers(4'000'000) << std::endl;
  std::cout << "End: " << currentTime() << std::endl;
  std::cout << std::endl;

  std::cout << "Challenge 3: Largest prime factor" << std::endl;
  std::cout << "Start: " << currentTime() << std::endl;
  std::cout << "Largest prime factor of 600,851: " << generateLargestPrimeFactor(600'851) << std::endl;
  std::cout << "End: " << currentTime() << std::endl;
  std::cout << std::endl;

  std::cout << "Challenge 7: 10001st prime" << std::endl;
  std::cout << "Start: " << currentTime() << std::endl;
  std::cout << "10,001st Prime Number: " << generateNthPrime(10'001) << std::endl;
  std::cout << "End: " << currentTime() << std::endl;
  std::cout << std::endl;
}
