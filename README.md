# Connect Four

This is a simple connect four game that I am building with the goal of trying TDD in C based on http://eradman.com/posts/tdd-in-c.html

## Running tests

The project contains two separate CMakeLists.txt--one for building the application and one for running the tests (in `_test/`).

`test.h` defines runner macros, external variables for keeping track of test status, and test suite declarations.

Each production source file has a corresponding test file containig a test source suite definition, which simply runs test for each case of the feature being implemented. Test suites are named with the convention `S_suiteName()` and tests are named `T_testName()`. 

A single failure stops testing.
