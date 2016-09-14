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

# Contributing

In order to contribute new build systems, or improve the existing ones please do as follows:

* If contributing a new build system, create a branch off of *master* with the name of the build system
  * Alternative configurations for the same build system should also be in different branches, with names to distinguish them
* Produce the build scripts necessary on the new branch, committing only what is necessary
* Ensure that the Vagrantfile is correctly updated to allow the build system to run inside the Ubuntu VM that it builds without needing to configure anything extra
  * Normally this involves adding a new *apt-get install* line to the Vagrantfile similar to the one that already exists.
  * Please try to add new lines instead of editing the existing one since this will help make merges easier to manage
* Update the README in the branch with any extra information that is needed, such as how to run the build.
  * Feel free to add credit to the README file as well if you so wish
