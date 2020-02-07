//
// Created by adam on 1/31/20.
//

#include <stdio.h>
#include "test.h"

int test_suites_run = 0;
int tests_run = 0;

int all_tests() {
    _runSuite("Check Wins", S_checkWins);
    return 0;
}

int main(int argc, char **argv) {
    test_suites_run = 0;
    tests_run = 0;

    int result = all_tests();
    if (result == 0)
        printf("\n\nPASSED ALL TESTS\n");
    printf("Tests run: %d\n", tests_run);

    return result != 0;
}