# Connect Four

This is a simple connect four game that I am building in order to experiement with implementing TDD principles in C based on http://eradman.com/posts/tdd-in-c.html

## Running tests

The project uses CMake to manage builds. It contains two separate `CMakeLists.txt` files—one to build a test runner executable (in `_test/`) and one to build the production application (located in the root directory).

`test.h` defines runner macros, external variables for keeping track of test status, and test suite declarations.

Each production source file has a corresponding test source file containig unit test functions packaged in a test suite function. For clarity, test suite names are prefixed with `S_` and unit test names with `T_`. 

`test-runner.c` is the main source file and simply runs all the suites defined.

A single failure stops testing.
