//
// Created by adam on 1/31/20.
//

#include "utils.h"
#include <stdio.h>

player checkHorizontal(player board[6][7]);

player checkVertical(player board[6][7]);

player checkHorizontalAndVertical(player board[6][7]);

player checkWins(player board[6][7]) {
    return checkHorizontalAndVertical(board);
    player winner = checkHorizontal(board);
    if (winner != NONE)
        return winner;
    winner = checkVertical(board);
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

player checkVertical(player board[6][7]) {
    int count = 0;
    player countPlayer;
    for (int j = 0; j < 7; j++) {
        countPlayer = NONE;
        for (int i = 0; i < 6; i++) {
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

player checkHorizontalAndVertical(player board[6][7]) {
    int countH = 0;
    int countV = 0;
    player countPlayerH;
    player countPlayerV;
    for (int i = 0; i < 7; i++) {
        countPlayerH = NONE;
        countPlayerV = NONE;
        for (int j = 0; j < 7; j++) {
            if (i < 6) {
            if (board[i][j] != NONE && board[i][j] == countPlayerH) {
                countH++;
            } else {
                countPlayerH = board[i][j];
                countH = 1;
            }
            if (countH > 3)
                return countPlayerH;
            }
            if (j < 6) {
                if (board[j][i] != NONE && board[j][i] == countPlayerV) {
                    countV++;
                } else {
                    countPlayerV = board[j][i];
                    countV = 1;
                }
                if (countV > 3)
                    return countPlayerV;
            }
        }
    }
    return NONE;
}
