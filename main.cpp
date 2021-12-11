#include "board.h"
#include <iostream>

int main()
{
    board game;
    game.move(game.squares[17].occupant, &game.squares[19]);
    for (auto idx = 0; idx < 64; idx++)
    {
        std::cout << game.squares[idx].name << " : ";
        if (game.squares[idx].occupant)
        {
            std::cout << game.squares[idx].occupant->type << ", " << game.squares[idx].occupant->move_count;
        }

        std::cout << std::endl;
    }
    return 0;
}