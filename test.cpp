#include "board.h"
#include <iostream>

int main()
{   
    board game;
    std::string move;
    std::cout << "Enter move :";
    getline(std::cin, move);
    int status;

    status = game.turn(game.squares, move);
    std::cout << status << std::endl;

    return 0;
}