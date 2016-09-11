#include <mathematics.h>
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE( add_1_1 )
{
    BOOST_CHECK_EQUAL(2, add(1, 1));
}
