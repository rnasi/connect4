//
// Created by adam on 1/31/20.
//

#ifndef CONNECT4_TEST_H
#define CONNECT4_TEST_H

#define FAIL() printf("\nfailure in %s() line %d\n", __func__, __LINE__)
#define _assert(test) do { if (!(test)) { FAIL(); return 1; } } while(0)
#define _verify(test) do { int r=test(); tests_run++; if(r) return r; } while(0)

//utils.c
int T_checkWin();

#endif //CONNECT4_TEST_H
