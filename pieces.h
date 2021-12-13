#pragma once

#include <string>
#include "board.h"
#include "square.h"

class piece
{
    public:
        int value;
        int color;
        square *location;
        char type;
        int move_count = 0;
        bool en_passant = false;
};