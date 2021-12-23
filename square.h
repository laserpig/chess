#pragma once

class piece;
#include <string>
#include "pieces.h"

class square
{
    public:
    std::string name;
    piece *occupant;
    int index;
    int whose_turn;
    bool white_in_check = false;
    bool black_in_check = false;
    bool white_castled = false;
    bool black_castled = false;
    bool checkmate = false;
    int half_move = 0;
    int full_move = 1;
};