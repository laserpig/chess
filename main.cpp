#include "board.h"
#include <iostream>

int main()
{
    board game;
    
    std::string reply;
    std::string to;
    std::string from;

    while (reply != "q" && reply != "Q")
    {
        if (game.squares[64].whose_turn == 0)
        {
            std::cout << "Enter White Move: ";
            getline(std::cin, from);
            getline(std::cin,to);
        }
        if (game.squares[64].whose_turn == 1)
        {
            std::cout << "Enter Black Move: ";
            getline(std::cin, from);
            getline(std::cin,to);
        }
        
    }

    return 0;
}