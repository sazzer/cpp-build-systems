lib_LTLIBRARIES = libshared.la
libshared_la_SOURCES = main/add.cpp main/multiply.cpp
libshared_la_LDFLAGS = -version-info 0:0:0

check_PROGRAMS = test_shared
test_shared_SOURCES = test/test.cpp test/add_test.cpp test/multiply_test.cpp
test_shared_CPPFLAGS = -Imain
test_shared_LDADD = libshared.la ${BOOST_TEST_LIBS}

TESTS = $(check_PROGRAMS)
