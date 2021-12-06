#include "board.h"
#include "pieces.h"

board::board()
{
    squares = new square[64];
    std::string name;
    char letter = '@';
    int index = 0;
    int pieceCount = 0;
    
    piece::pawn *white_pawn1 = new piece::pawn;
    white_pawn1->color = 0;
    piece::pawn *white_pawn2 = new piece::pawn;
    white_pawn2->color = 0;
    piece::pawn *white_pawn3 = new piece::pawn;
    white_pawn3->color = 0;
    piece::pawn *white_pawn4 = new piece::pawn;
    white_pawn4->color = 0;
    piece::pawn *white_pawn5 = new piece::pawn;
    white_pawn5->color = 0;
    piece::pawn *white_pawn6 = new piece::pawn;
    white_pawn6->color = 0;
    piece::pawn *white_pawn7 = new piece::pawn;
    white_pawn7->color = 0;
    piece::pawn *white_pawn8 = new piece::pawn;
    white_pawn8->color = 0;

    piece::pawn *black_pawn1 = new piece::pawn;
    black_pawn1->color = 1;
    piece::pawn *black_pawn2 = new piece::pawn;
    black_pawn2->color = 1;
    piece::pawn *black_pawn3 = new piece::pawn;
    black_pawn3->color = 1;
    piece::pawn *black_pawn4 = new piece::pawn;
    black_pawn4->color = 1;
    piece::pawn *black_pawn5 = new piece::pawn;
    black_pawn5->color = 1;
    piece::pawn *black_pawn6 = new piece::pawn;
    black_pawn6->color = 1;
    piece::pawn *black_pawn7 = new piece::pawn;
    black_pawn7->color = 1;
    piece::pawn *black_pawn8 = new piece::pawn;
    black_pawn8->color = 1;

    piece::rook *white_rook1 = new piece::rook;
    white_rook1->color = 0;
    piece::rook *white_rook2 = new piece::rook;
    white_rook2->color = 0;

    piece::rook *black_rook1 = new piece::rook;
    black_rook1->color = 1;
    piece::rook *black_rook2 = new piece::rook;
    black_rook2->color = 1;

    piece::knight *white_knight1 = new piece::knight;
    white_knight1->color = 0;
    piece::knight *white_knight2 = new piece::knight;
    white_knight2->color = 0;

    piece::knight *black_knight1 = new piece::knight;
    black_knight1->color = 1;
    piece::knight *black_knight2 = new piece::knight;
    black_knight2->color = 1;

    piece::bishop *white_bishop1 = new piece::bishop;
    white_bishop1->color = 0;
    piece::bishop *white_bishop2 = new piece::bishop;
    white_bishop2->color = 0;

    piece::queen *white_queen = new piece::queen;
    white_queen->color = 0;
    piece::king *white_king = new piece::king;
    white_king->color = 0;

    piece::queen *black_queen = new piece::queen;
    black_queen->color = 1;
    piece::king *black_king = new piece::king;
    black_king->color = 1;

    for (auto idx = 0; idx < 8; idx++)
    {
        letter += 1;
        for (auto jdx = 0; jdx < 8; jdx++)
        {
            name = letter + std::to_string(jdx + 1);
            squares[index].name = name;
            squares[index].occupant = NULL;
            index++;

            if (name == "A1")
            {
                squares[index].occupant = white_rook1;
                white_rook1->location = &squares[index];
            }
            if (name == "H1")
            {
                squares[index].occupant = &white_rook1;
                white_rook1->location = &squares[index];
            }
        }
    }
}