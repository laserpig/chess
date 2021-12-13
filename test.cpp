#include "board.h"
#include <iostream>

int main()
{   
    board game;
    game.move(game.squares[25].occupant, &game.squares[28], game.squares);
    game.move(game.squares[22].occupant, &game.squares[20], game.squares);
    game.move(game.squares[28].occupant, &game.squares[21], game.squares);

    for (auto idx = 0; idx < 64; idx++)
    {
        std::cout << game.squares[idx].index << "  ";
        std::cout << game.squares[idx].name << " : ";
        if (game.squares[idx].occupant)
        {
            if (game.squares[idx].occupant->color == 0)
            {
                std::cout << "White " << game.squares[idx].occupant->type;
            }
            if (game.squares[idx].occupant->color == 1)
            {
                std::cout << "Black " << game.squares[idx].occupant->type;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}