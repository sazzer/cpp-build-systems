#include "greeting.h"

using namespace std::literals;

/** The prefix to use for the greeting */
const auto GREETING_PREFIX = "Hello, "s;

/**
 * Generate a greeting to use for the given name
 * @param name The name to greet
 * @return the greeting to use for the name
 */
const std::string greeting(const std::string& name) {
  return GREETING_PREFIX + name;
}
