#include "board.h"
#include <iostream>

int main()
{   
    board game;
    game.move(game.squares[1].occupant, &game.squares[19]);
    game.move(game.squares[62].occupant, &game.squares[35]);
    game.pawn_attack(game.white_attacked_squares, 26, 0);
    
    for (auto idx = 0; idx < game.white_attacked_squares.size(); idx++)
    {
        std::cout << game.white_attacked_squares[idx].name << std::endl;
    }
    std::cout << game.white_attacked_squares.size() << std::endl;
    return 0;
}