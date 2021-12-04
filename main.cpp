#include "board.h"
#include <iostream>

int main()
{
    board game;
    for (auto idx = 0; idx < 64; idx++) std::cout << game.squares[idx].name << std::endl;

    return 0;
}