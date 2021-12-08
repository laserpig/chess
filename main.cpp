#include "board.h"
#include <iostream>

int main()
{
    board game;
    for (auto idx = 0; idx < 64; idx++)
    {
        std::cout << game.squares[idx].name << " : ";
        if (game.squares[idx].occupant)
        {
            std::cout << game.squares[idx].occupant->type;
        }
        std::cout << std::endl;
    }
    return 0;
}