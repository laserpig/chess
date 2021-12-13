#pragma once

#include <string>
#include <vector>
#include "pieces.h"
#include "square.h"

class board
{
    public:
        board();
        ~board();
        square *squares;
        std::vector<square> white_attacked_squares;
        std::vector<square> black_attacked_squares;
        bool white_king_in_check;
        bool black_king_in_check;
        square * copy_board(square *A1);
        void move(piece *aPiece, square *to, square* aBoard);
        bool is_move_legal(piece candidate, square to);
        bool check_for_check(int piece_index, int destination);
        bool pawn_move(int piece_index, int destination, square *aBoard);
        void update_attacked_squares(std::vector<square> &white, std::vector<square> &black, square *aBoard);
        void diag_up_left(std::vector<square> &data, int index, int color, square *aBoard);
        void diag_up_right(std::vector<square> &data, int index, int color, square *aBoard);
        void diag_down_left(std::vector<square> &data, int index, int color, square *aBoard);
        void diag_down_right(std::vector<square> &data, int index, int color, square *aBoard);
        void orthog_up(std::vector<square> &data, int index, int color, square *aBoard);
        void orthog_down(std::vector<square> &data, int index, int color, square *aBoard);
        void orthog_left(std::vector<square> &data, int index, int color, square *aBoard);
        void orthog_right(std::vector<square> &data, int index, int color, square *aBoard);
        void knight_jump(std::vector<square> &data, int index, int color, square *aBoard);
        void king_attack(std::vector<square> &data, int index, int color, square *aBoard);
        void pawn_attack(std::vector<square> &data, int index, int color, square *aBoard);
};