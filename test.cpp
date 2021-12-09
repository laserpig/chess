#include "board.h"
#include <iostream>

int main()
{   
    board game;
    std::cout << "Square: " << game.squares[39].name << std::endl;
    game.orthogonal(game.squares[39]);

    return 0;
}