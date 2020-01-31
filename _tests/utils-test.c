//
// Created by adam on 1/31/20.
//

#include <stdio.h>
#include "test.h"
#include "../utils.h"

int T_checkWin() {
    player board[8][8];
    _assert(checkWins(board) == ONE);
    return 0;
}
