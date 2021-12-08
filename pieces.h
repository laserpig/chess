#pragma once

#include <string>
#include "board.h"
#include "square.h"

class piece
{
    public:
        int value;
        bool color;
        square *location;
        char type;
        bool is_move_legal(piece candidate, square to);
};