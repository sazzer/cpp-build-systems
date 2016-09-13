AC_INIT([cpp-build-systems], [0.0.1])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([foreign subdir-objects])
LT_INIT

# Check for C++ compiler
AC_PROG_CXX
AC_ENABLE_STATIC
AC_ENABLE_SHARED
AX_CXX_COMPILE_STDCXX_14(noext, mandatory)

BOOST_REQUIRE
BOOST_DATE_TIME
BOOST_TEST

AC_CONFIG_FILES([
  Makefile
  src/shared/Makefile
  src/static/Makefile
  src/executable/Makefile
])

AC_OUTPUT
