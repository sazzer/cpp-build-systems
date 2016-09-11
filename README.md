# C++ Build System Shootout

This project exists to compare different build systems for the exact same input project. Every branch has the exact same source files for the exact same project, and the only difference is the build system that is used.

The actual project covers the following requirements:
* Multiple modules as part of one build
* Multiple files as part of one module
* Builds a Shared Library
* Builds a Static Library
* Builds an Executable
* Dependencies between internal modules
* Dependencies on external modules
  * Boost Unit Test
  * Boost DateTime
* Unit tests
* C++14 Features
  * Function return type deduction
  * Standard user-defined literals

The directory structure is set up so that different modules are in different directories, and each testable module has a Main and a Test directory for the appropriate code.

In all cases, there is a Vagrantfile and corresponding setup script to configure a Linux VM for the builds. The only difference between these VMs is the build tools that are installed - everything else is identical. This allows for use of the various build setups on a machine that either can't or doesn't have the appropriate tools and libraries installed.
