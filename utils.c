//
// Created by adam on 1/31/20.
//

#include "utils.h"
#include <stdio.h>

player checkHorizontal(player board[6][7]);

player checkWins(player board[6][7]) {
    player winner = checkHorizontal(board);

    return winner;
}

player checkHorizontal(player board[6][7]) {
    int count = 0;
    player countPlayer;
    for (int i = 0; i < 6; i++) {
        countPlayer = NONE;
        for (int j = 0; j < 7; j++) {
            if (board[i][j] != NONE && board[i][j] == countPlayer) {
                count++;
            } else {
                countPlayer = board[i][j];
                count = 1;
            }
            if (count > 3)
                return countPlayer;
        }
    }

    return NONE;
}
