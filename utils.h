//
// Created by adam on 1/31/20.
//

#ifndef CONNECT4_UTILS_H
#define CONNECT4_UTILS_H

typedef enum {
    NONE = 0,
    ONE = 1,
    TWO = 2
} player;

player checkWins(player board[6][7]);

#endif //CONNECT4_UTILS_H



