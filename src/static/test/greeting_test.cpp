#include <greeting.h>
#include <boost/test/unit_test.hpp>

using namespace std::literals;

BOOST_AUTO_TEST_CASE( greeting_world)
{
    BOOST_CHECK_EQUAL("Hello, World"s, greeting("World"));
}
