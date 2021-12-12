#include "board.h"
#include <iostream>

int main()
{   
    board game;
    game.move(game.squares[31].occupant, &game.squares[37]);
    //game.move(game.squares[33].occupant, &game.squares[26]);

   
    bool check = game.check_for_check(33, 26);
    if (check == true) std::cout << "CHECK" << std::endl;
    else if (check == false) std::cout << "SAFE" << std::endl;

    
    
    return 0;
}