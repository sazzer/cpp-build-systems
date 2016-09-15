# C++ Build System Shootout

This project exists to compare different build systems for the exact same input project. Every directory has the exact same source files for the exact same project, and the only difference is the build system that is used.

The actual project covers the following requirements:
* Multiple modules as part of one build
* Multiple files as part of one module
* Builds an Executable
* Builds a Shared Library
* Builds a Static Library to be used by the Executable
* Builds a Static Library to be used in a Shared Library
* Dependencies between internal modules
* Dependencies on external modules
  * Shared Library
  * Static Library
  * Header Only Dependency
* Installation procedure
* Unit tests
* C++14 Features
  * Function return type deduction
  * Standard user-defined literals

The directory structure is set up so that different modules are in different directories, and each testable module has a Main and a Test directory for the appropriate code.

The actual project is a set of solutions to various Project Euler challenges. Specifically, every module represents a different Project Euler challenge:
* Challenge 1: Multiples of 3 and 5 - Static Library
* Challenge 2: Even Fibonacci numbers - Shared Library
* Challenge 3: Largest prime factor - Static + Shared Library
  * Static Library: Determine if number is prime
  * Shared Library: Largest prime factor
* Challenge 7: 10001st prime - reuse of Static Library
  * Uses the same Static Library as in Challenge 3

Each artifact will have unit tests for testing that it works correctly. There will also be an overarching executable that pulls all the challenges together into one.

External dependencies that the project will use are:
* Easyloggingpp - This is a header-only dependency
* Google Test - This is for the unit tests
* Boost - DateTime - This is because Boost can be difficult to integrate, and is a Shared Library
* GMP - This is available as a Static Library
