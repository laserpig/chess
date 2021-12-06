#include "board.h"
#include "pieces.h"

board::board()
{
    squares = new square[64];
    std::string name;
    char letter = '@';
    int index = 0;
    int pieceCount = 0;
    
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
    piece::pawn *whitepawn1 = new piece::pawn;
    whitepawn1->color = 0;
    piece::pawn *whitepawn2 = new piece::pawn;
    piece::pawn *whitepawn3 = new piece::pawn;
    piece::pawn *whitepawn4 = new piece::pawn;
    piece::pawn *whitepawn5 = new piece::pawn;
    piece::pawn *whitepawn6 = new piece::pawn;
    piece::pawn *whitepawn7 = new piece::pawn;
    piece::pawn *whitepawn8 = new piece::pawn;

    piece::pawn *blackpawn1 = new piece::pawn;
    piece::pawn *blackpawn2 = new piece::pawn;
    piece::pawn *blackpawn3 = new piece::pawn;
    piece::pawn *blackpawn4 = new piece::pawn;
    piece::pawn *blackpawn5 = new piece::pawn;
    piece::pawn *blackpawn6 = new piece::pawn;
    piece::pawn *blackpawn7 = new piece::pawn;
    piece::pawn *blackpawn8 = new piece::pawn;
}