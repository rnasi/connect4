//
// Created by adam on 1/31/20.
//

#ifndef CONNECT4_TEST_H
#define CONNECT4_TEST_H

#define FAIL() printf("\nFAILURE in %s() line %d\n", __func__, __LINE__)
#define _assert(test) do { if (!(test)) { FAIL(); return 1; } } while(0)
#define _runSuite(description, testSuite) do { putchar('\n'); printf(description); putchar('\n'); int r=testSuite(); test_suites_run++; if(r) return r; } while(0)
#define _verify(description, test) do { putchar('\t'); printf(description); printf("--"); int r=test(); tests_run++; if(r) return r; printf("Passed\n"); } while(0)

int test_suites_run;
int tests_run;

//utils.c
int S_checkWins();

#endif //CONNECT4_TEST_H
