#include "board.h"
#include <iostream>

int main()
{   
    board game;
    game.move(game.squares[40].occupant, &game.squares[2], game.squares);
    game.move(game.squares[48].occupant, &game.squares[3], game.squares);
    game.move(game.squares[32].occupant, &game.squares[48], game.squares);
    

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