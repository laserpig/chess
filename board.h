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
        square *squares = NULL;
        std::vector<square> white_attacked_squares;
        std::vector<square> black_attacked_squares;
        bool white_king_in_check;
        bool black_king_in_check;
        square * copy_board(square *A1);
        int turn(square *aBoard, std::string move);
        void move(piece *aPiece, square *to, square* aBoard);
        bool check_for_mate(square *aBoard, int color);
        bool is_move_legal(int piece_index, int destination, square *aBoard);
        bool check_for_check(int piece_index, int destination, square *aBoard);
        bool pawn_move(int piece_index, int destination, square *aBoard);
        bool king_move(int piece_index, int destination, square *aBoard);
        bool queen_move(int piece_index, int destination, square *aBoard);
        bool rook_move(int piece_index, int destination, square *aBoard);
        bool knight_move(int piece_index, int destination, square *aBoard);
        bool bishop_move(int piece_index, int destination, square *aBoard);
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
        void queen(std::vector<square> &data, int index, square *aBoard);
        void rook(std::vector<square> &data, int index, square *aBoard);
        void bishop(std::vector<square> &data, int index, square *aBoard);
        void pawn(std::vector<square> &data, int index, square *aBoard);
        void printBoard();
};