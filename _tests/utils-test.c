//
// Created by adam on 1/31/20.
//

#include <stdio.h>
#include "test.h"
#include "../utils.h"

int T_handleNonWinningBoards() {
    player board1[6][7] = {
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
    };

    _assert(checkWins(board1) == NONE);

    player board2[6][7] = {
            {2, 1, 2, 1, 2, 1, 2},
            {2, 1, 2, 1, 2, 1, 2},
            {2, 1, 2, 1, 2, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
            {1, 2, 1, 2, 1, 2, 1},
            {1, 2, 1, 2, 1, 2, 1},
    };

    _assert(checkWins(board2) == NONE);

    player board3[6][7] = {
            {2, 2, 2, 1, 1, 1, 2},
            {1, 1, 1, 2, 2, 2, 1},
            {2, 2, 2, 1, 1, 1, 2},
            {1, 1, 1, 2, 2, 2, 1},
            {2, 2, 2, 1, 1, 1, 2},
            {1, 1, 1, 2, 2, 2, 1},
    };

    _assert(checkWins(board3) == NONE);

    player board4[6][7] = {
            {1, 2, 1, 2, 1, 2, 1},
            {2, 1, 2, 1, 2, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
            {1, 2, 1, 2, 1, 2, 1},
            {2, 1, 2, 1, 2, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
    };

    _assert(checkWins(board4) == NONE);

    player board5[6][7] = {
            {0, 0, 2, 0, 0, 0, 0},
            {0, 0, 1, 0, 0, 0, 0},
            {1, 1, 2, 0, 0, 0, 2},
            {2, 2, 1, 2, 2, 2, 1},
            {1, 2, 2, 1, 2, 1, 1},
            {1, 2, 2, 2, 1, 1, 1},
    };

    _assert(checkWins(board5) == NONE);

    return 0;
}

int T_handleHorizontalWins() {
    
}



int S_checkWins() {
    _verify("Handle non-winning boards", T_handleNonWinningBoards);
    _verify("Handle horizontal win conditions", T_handleHorizontalWins);
    return 0;
}
