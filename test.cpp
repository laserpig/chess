#include "board.h"
#include <iostream>

int main()
{   
    board game;
    std::string fen = game.generate_fen(game.squares);

    std::cout << fen << std::endl;

    return 0;
}