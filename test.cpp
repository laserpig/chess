#include "board.h"
#include <iostream>

int main()
{   
    board game;
    game.orthog_up(game.white_attacked_squares, 27, 1);
    game.orthog_down(game.white_attacked_squares, 27, 1);
    game.orthog_left(game.white_attacked_squares, 27, 1);
    game.orthog_right(game.white_attacked_squares, 27, 1);
    game.diag_down_left(game.white_attacked_squares, 27, 1);
    game.diag_down_right(game.white_attacked_squares, 27, 1);
    game.diag_up_left(game.white_attacked_squares, 27, 1);
    game.diag_up_right(game.white_attacked_squares, 27, 1);
    for (auto idx = 0; idx < game.white_attacked_squares.size(); idx++)
    {
        std::cout << game.white_attacked_squares[idx].name << std::endl;
    }
    return 0;
}