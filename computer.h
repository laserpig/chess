#pragma once

#include "pieces.h"
#include "square.h"
#include "board.h"

class computer
{
    public:
        int color;
        float evaluation;
        int depth;
        void evaluate(square *aBoard);
};