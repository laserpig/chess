#include "board.h"
#include <iostream>

int main()
{   
    board game;
    std::string fen;
    std::cout << "Enter fen: ";
    getline(std::cin, fen);

    square *aBoard = game.board_gen(fen);
    game.printBoard(aBoard);
    fen = game.generate_fen(aBoard);
    std::cout << fen << std::endl;

    return 0;
}