#pragma once

#include "pieces.h"
#include "square.h"
#include "board.h"
#include "move.h"

class computer
{
    public:
        int color;
        float evaluation;
        int depth;
        move evaluate(square *aBoard);
        std::vector<std::vector<move>> tree;
};