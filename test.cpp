#include "board.h"
#include "computer.h"
#include <iostream>

int main()
{   
    board game;
    computer ai;
    std::string fen;
    move aMove;

    std::cout << "Enter fen: ";
    getline(std::cin, fen);
    aMove = ai.tree(fen);

    std::cout << game.squares[aMove.from].name << " " << game.squares[aMove.to].name << std::endl;

    return 0;
}