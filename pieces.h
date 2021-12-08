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
};