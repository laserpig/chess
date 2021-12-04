#include "board.h"

board::board()
{
    squares = new square[64];
    std::string name;
    char letter = '@';
    int index = 0;
    for (auto idx = 0; idx < 8; idx++)
    {
        letter += 1;
        for (auto jdx = 0; jdx < 8; jdx++)
        {
            name = letter + std::to_string(jdx + 1);
            squares[index].name = name;
            squares[index].occupant = NULL;
            index++;
        }
    }
}