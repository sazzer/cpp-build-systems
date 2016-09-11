#include <mathematics.h>
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE( multiply_2_3 )
{
    BOOST_CHECK_EQUAL(6, multiply(2, 3));
}
