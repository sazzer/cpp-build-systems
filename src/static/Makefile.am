lib_LTLIBRARIES = libstatic.la
libstatic_la_SOURCES = main/greeting.cpp

check_PROGRAMS = test_static
test_static_SOURCES = test/test.cpp test/greeting_test.cpp
test_static_CPPFLAGS = -Imain
test_static_LDADD = libstatic.la ${BOOST_TEST_LIBS}

TESTS = $(check_PROGRAMS)
