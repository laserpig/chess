#include "board.h"
#include <iostream>



int main()
{
    board game;
    std::string fen;
    std::string move;
    int status = 0;

    while (status != 3)
    {
        if (game.squares[64].whose_turn == 0) std::cout << "Enter White Move: ";
        if (game.squares[64].whose_turn == 1) std::cout << "Enter Black Move: ";

        getline(std::cin, move);
        status = game.turn(game.squares, move);

        fen = game.generate_fen(game.squares);
        std::cout << fen << std::endl;

        if (status == 0) continue;
        if (status == 1) std::cout << move << " is not a legal move." << std::endl;
        if (status == 2) std::cout << "Check!" << std::endl;
        if (status == 3)
        {
            std::cout << "Checkmate! ";
            if (game.squares[64].whose_turn == 1) std::cout << "White Wins!" << std::endl;
            if (game.squares[64].whose_turn == 0) std::cout << "Black Wins!" << std::endl;
        }
        if (status == 4) std::cout << "Draw by Stalemate!" << std::endl;
        if (status == 5) std::cout << "Draw by 50 move rule!" << std::endl;
    }


    return 0;
}