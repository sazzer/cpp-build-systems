# Set up the core CMake build
cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
project(cpp-build-systems VERSION 0.1 LANGUAGES CXX)

# Ensure that we can use C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED 1)
set(CMAKE_CXX_EXTENSIONS 0)

# Find any external dependencies that we want
# Boost date_time and unit_test_framework
find_package(Boost REQUIRED COMPONENTS date_time unit_test_framework)

# We want to enable unit tests
enable_testing()

# Build a Static library, including unit tests for it
add_library(static STATIC
  src/static/main/greeting.cpp)
target_include_directories(static PUBLIC src/static/main)
add_executable(test_static
  src/static/test/test.cpp
  src/static/test/greeting_test.cpp)
target_link_libraries(test_static static Boost::unit_test_framework)
add_test(static test_static)

# Build a Shared library, including unit tests for it
add_library(shared SHARED
  src/shared/main/add.cpp
  src/shared/main/multiply.cpp)
target_include_directories(shared PUBLIC src/shared/main)
add_executable(test_shared
  src/shared/test/test.cpp
  src/shared/test/add_test.cpp
  src/shared/test/multiply_test.cpp)
target_link_libraries(test_shared shared Boost::unit_test_framework)
add_test(shared test_shared)

# Build an executable that depends on both the Static and Shared libraries, as well as Boost Date-Time
add_executable(executable
  src/executable/main/main.cpp)
target_link_libraries(executable static shared Boost::date_time)
