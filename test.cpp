#include "board.h"
#include <iostream>

int main()
{   
    board game;
    std::string fen;
    std::cout << "Enter fen: ";
    getline(std::cin, fen);

    square *aBoard = game.board_gen(fen);
    fen = game.generate_fen(aBoard);
    std::cout << "Enter fen: " << fen << std::endl;
    game.printBoard(aBoard);

    return 0;
}