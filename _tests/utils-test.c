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
            {1, 1, 1, 2, 2, 2, 1},
            {2, 2, 2, 1, 1, 1, 2},
            {2, 1, 1, 1, 2, 2, 2},
            {1, 2, 2, 2, 1, 1, 1},
            {2, 2, 2, 1, 1, 1, 2},
            {1, 1, 1, 2, 2, 2, 1},
    };

    _assert(checkWins(board3) == NONE);

    player board4[6][7] = {
            {2, 2, 2, 1, 1, 1, 2},
            {1, 1, 1, 2, 2, 2, 1},
            {2, 2, 2, 1, 1, 1, 2},
            {1, 1, 1, 2, 2, 2, 1},
            {2, 2, 2, 1, 1, 1, 2},
            {1, 1, 1, 2, 2, 2, 1},
    };

    _assert(checkWins(board4) == NONE);

    player board5[6][7] = {
            {1, 2, 1, 2, 1, 2, 1},
            {2, 1, 2, 1, 2, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
            {1, 2, 1, 2, 1, 2, 1},
            {2, 1, 2, 1, 2, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
    };

    _assert(checkWins(board5) == NONE);

    player board6[6][7] = {
            {0, 0, 2, 0, 0, 0, 0},
            {0, 0, 1, 0, 0, 0, 0},
            {1, 1, 2, 0, 0, 0, 2},
            {2, 2, 1, 2, 2, 2, 1},
            {1, 2, 2, 1, 2, 1, 1},
            {1, 2, 2, 2, 1, 1, 1},
    };

    _assert(checkWins(board6) == NONE);

    return 0;
}

int T_handleHorizontalWins() {
    player board1[6][7] = {
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {1, 1, 1, 1, 2, 2, 2},
    };

    _assert(checkWins(board1) == ONE);

     player board2[6][7] = {
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 1, 0, 0, 0},
            {1, 1, 1, 2, 2, 2, 2},
    };

    _assert(checkWins(board2) == TWO);

    player board3[6][7] = {
            {1, 2, 1, 2, 1, 2, 1},
            {2, 1, 1, 1, 1, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
            {1, 2, 1, 2, 1, 2, 1},
            {2, 1, 2, 1, 2, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
    };

    _assert(checkWins(board3) == ONE);

    player board4[6][7] = {
            {1, 2, 1, 2, 1, 2, 1},
            {2, 1, 2, 1, 2, 1, 2},
            {1, 2, 1, 2, 2, 2, 2},
            {1, 2, 1, 2, 1, 2, 1},
            {2, 1, 2, 1, 2, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
    };

    _assert(checkWins(board4) == TWO);

    player board5[6][7] = {
            {2, 2, 2, 2, 1, 2, 1},
            {2, 1, 2, 1, 2, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
            {1, 2, 1, 2, 1, 2, 1},
            {2, 1, 2, 1, 2, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
    };

    _assert(checkWins(board5) == TWO);

    player board6[6][7] = {
            {2, 1, 2, 1, 1, 2, 1},
            {2, 1, 2, 1, 2, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
            {2, 2, 2, 2, 1, 2, 1},
            {2, 1, 2, 1, 2, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
    };

    _assert(checkWins(board6) == TWO);

    player board7[6][7] = {
            {2, 1, 2, 1, 1, 1, 1},
            {2, 1, 2, 1, 2, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
            {1, 2, 1, 2, 1, 2, 1},
            {2, 1, 2, 1, 2, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
    };

    _assert(checkWins(board7) == ONE);

    return 0;
}

int T_handleVerticalWins() {
    player board1[6][7] = {
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0},
            {1, 2, 0, 0, 0, 0, 0},
            {1, 2, 0, 0, 0, 0, 0},
            {1, 2, 0, 0, 0, 0, 0},
    };

    _assert(checkWins(board1) == ONE);

    player board2[6][7] = {
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 2},
            {0, 0, 0, 0, 0, 0, 2},
            {0, 0, 0, 0, 1, 0, 2},
            {0, 0, 0, 0, 1, 1, 2},
    };

    _assert(checkWins(board2) == TWO);

    player board3[6][7] = {
            {2, 1, 2, 1, 2, 1, 2},
            {2, 1, 2, 1, 2, 1, 2},
            {2, 1, 2, 1, 2, 1, 2},
            {2, 2, 1, 2, 1, 2, 1},
            {1, 2, 1, 2, 1, 2, 1},
            {1, 2, 1, 2, 1, 2, 1},
    };

    _assert(checkWins(board3) == TWO);

    player board4[6][7] = {
            {1, 2, 1, 2, 1, 2, 1},
            {1, 2, 1, 2, 1, 2, 1},
            {1, 2, 1, 2, 1, 2, 1},
            {2, 1, 2, 1, 2, 1, 1},
            {2, 1, 2, 1, 2, 1, 2},
            {2, 1, 2, 1, 2, 1, 2},
    };

    _assert(checkWins(board4) == ONE);

       player board5[6][7] = {
            {1, 2, 1, 2, 1, 2, 1},
            {1, 2, 1, 2, 1, 2, 1},
            {1, 2, 1, 2, 1, 2, 1},
            {2, 1, 1, 1, 2, 1, 1},
            {2, 1, 2, 1, 2, 1, 2},
            {2, 1, 2, 1, 2, 1, 2},
    };

    _assert(checkWins(board5) == ONE);

    player board6[6][7] = {
            {1, 2, 1, 2, 2, 2, 1},
            {2, 1, 2, 1, 1, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
            {1, 2, 1, 2, 1, 2, 1},
            {2, 1, 2, 1, 1, 1, 2},
            {1, 2, 1, 2, 2, 2, 1},
    };

    _assert(checkWins(board6) == ONE);

    player board7[6][7] = {
            {1, 1, 1, 2, 1, 2, 1},
            {2, 2, 2, 1, 2, 1, 2},
            {1, 2, 1, 2, 1, 2, 1},
            {1, 2, 1, 2, 1, 2, 1},
            {2, 2, 2, 1, 2, 1, 2},
            {1, 1, 1, 2, 1, 2, 1},
    };

    _assert(checkWins(board7) == TWO);

    return 0;
}

int S_checkWins() {
    _verify("Handle non-winning boards", T_handleNonWinningBoards);
    _verify("Handle horizontal win conditions", T_handleHorizontalWins);
    _verify("Handle vertical win conditions", T_handleVerticalWins);
    return 0;
}
