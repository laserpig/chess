#pragma once

#include <string>
#include "pieces.h"
#include "square.h"

class board
{
    public:
        square *squares;
        square *white_attacked_squares;
        square *black_attacked_squares;
        board();
        ~board();
        bool is_move_legal(piece candidate, square to);
        void update_attacked_squares();
};