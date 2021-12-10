#pragma once

#include <string>
#include <vector>
#include "pieces.h"
#include "square.h"

class board
{
    public:
        square *squares;
        std::vector<square> white_attacked_squares;
        std::vector<square> black_attacked_squares;
        board();
        ~board();
        void move(piece *aPiece, square *to);
        bool is_move_legal(piece candidate, square to);
        void update_attacked_squares();
        void diag_up_left(std::vector<square> &data, int index, int color);
        void diag_up_right(std::vector<square> &data, int index, int color);
        void diag_down_left(std::vector<square> &data, int index, int color);
        void diag_down_right(std::vector<square> &data, int index, int color);
        void orthog_up(std::vector<square> &data, int index, int color);
        void orthog_down(std::vector<square> &data, int index, int color);
        void orthog_left(std::vector<square> &data, int index, int color);
        void orthog_right(std::vector<square> &data, int index, int color);
};