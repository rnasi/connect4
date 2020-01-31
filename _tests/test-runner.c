//
// Created by adam on 1/31/20.
//

#include <stdio.h>
#include "test.h"

int tests_run = 0;

int all_tests() {
    _verify(T_checkWin);
    return 0;
}

int main(int argc, char **argv) {
    int result = all_tests();
    if (result == 0)
        printf("PASSED\n");
    printf("Tests run: %d\n", tests_run);

    return result != 0;
}