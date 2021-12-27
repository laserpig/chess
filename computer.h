#pragma once

#include "pieces.h"
#include "square.h"
#include "board.h"
#include "move.h"

class computer
{
    public:
        board game;
        int color;
        int start_depth = 4;
        move tree(std::string fen);
        int tree(std::string fen, int depth, move aMove);
        int eval(square *aBoard);
};