#include "board.h"
#include "pieces.h"
#include <iostream>

board::board()
{
    squares = new square[64];
    white_attacked_squares = NULL;
    black_attacked_squares = NULL;
    std::string name;
    char letter = '@';
    int index = 0;

    piece *white_pawn1 = new piece;
    white_pawn1->color = 0;
    white_pawn1->type = 'P';
    piece *white_pawn2 = new piece;
    white_pawn2->color = 0;
    white_pawn2->type = 'P';
    piece *white_pawn3 = new piece;
    white_pawn3->color = 0;
    white_pawn3->type = 'P';
    piece *white_pawn4 = new piece;
    white_pawn4->color = 0;
    white_pawn4->type = 'P';
    piece *white_pawn5 = new piece;
    white_pawn5->color = 0;
    white_pawn5->type = 'P';
    piece *white_pawn6 = new piece;
    white_pawn6->color = 0;
    white_pawn6->type = 'P';
    piece *white_pawn7 = new piece;
    white_pawn7->color = 0;
    white_pawn7->type = 'P';
    piece *white_pawn8 = new piece;
    white_pawn8->color = 0;
    white_pawn8->type = 'P';

    piece *black_pawn1 = new piece;
    black_pawn1->color = 1;
    black_pawn1->type = 'P';
    piece *black_pawn2 = new piece;
    black_pawn2->color = 1;
    black_pawn2->type = 'P';
    piece *black_pawn3 = new piece;
    black_pawn3->color = 1;
    black_pawn3->type = 'P';
    piece *black_pawn4 = new piece;
    black_pawn4->color = 1;
    black_pawn4->type = 'P';
    piece *black_pawn5 = new piece;
    black_pawn5->color = 1;
    black_pawn5->type = 'P';
    piece *black_pawn6 = new piece;
    black_pawn6->color = 1;
    black_pawn6->type = 'P';
    piece *black_pawn7 = new piece;
    black_pawn7->color = 1;
    black_pawn7->type = 'P';
    piece *black_pawn8 = new piece;
    black_pawn8->color = 1;
    black_pawn8->type = 'P';

    piece *white_rook1 = new piece;
    white_rook1->color = 0;
    white_rook1->type = 'R';
    piece *white_rook2 = new piece;
    white_rook2->color = 0;
    white_rook2->type = 'R';

    piece *black_rook1 = new piece;
    black_rook1->color = 1;
    black_rook1->type = 'R';
    piece *black_rook2 = new piece;
    black_rook2->color = 1;
    black_rook2->type = 'R';

    piece *white_knight1 = new piece;
    white_knight1->color = 0;
    white_knight1->type = 'N';
    piece *white_knight2 = new piece;
    white_knight2->color = 0;
    white_knight2->type = 'N';

    piece *black_knight1 = new piece;
    black_knight1->color = 1;
    black_knight1->type = 'N';
    piece *black_knight2 = new piece;
    black_knight2->color = 1;
    black_knight2->type = 'N';

    piece *white_bishop1 = new piece;
    white_bishop1->color = 0;
    white_bishop1->type = 'B';
    piece *white_bishop2 = new piece;
    white_bishop2->color = 0;
    white_bishop2->type = 'B';

    piece *black_bishop1 = new piece;
    black_bishop1->color = 1;
    black_bishop1->type = 'B';
    piece *black_bishop2 = new piece;
    black_bishop2->color = 1;
    black_bishop2->type = 'B';

    piece *white_king = new piece;
    white_king->color = 0;
    white_king->type = 'K';
    piece *white_queen = new piece;
    white_queen->color = 0;
    white_queen->type = 'Q';

    piece *black_king = new piece;
    black_king->color = 1;
    black_king->type = 'K';
    piece *black_queen = new piece;
    black_queen->color = 1;
    black_queen->type = 'Q';

    for (auto idx = 0; idx < 8; idx++)
    {
        letter += 1;
        for (auto jdx = 0; jdx < 8; jdx++)
        {
            name = letter + std::to_string(jdx + 1);
            squares[index].name = name;
            squares[index].occupant = NULL;

            if (name == "A1")
            {
                squares[index].occupant = white_rook1;
                white_rook1->location = &squares[index];
            }
            if (name == "H1")
            {
                squares[index].occupant = white_rook2;
                white_rook2->location = &squares[index];
            }
            if (name == "B1")
            {
                squares[index].occupant = white_knight1;
                white_knight1->location = &squares[index];
            }
            if (name == "G1")
            {
                squares[index].occupant = white_knight2;
                white_knight2->location = &squares[index];
            }
            if (name == "C1")
            {
                squares[index].occupant = white_bishop1;
                white_bishop1->location = &squares[index];
            }
            if (name == "F1")
            {
                squares[index].occupant = white_bishop2;
                white_bishop2->location = &squares[index];
            }
            if (name == "D1")
            {
                squares[index].occupant = white_queen;
                white_queen->location = &squares[index];
            }
            if (name == "E1")
            {
                squares[index].occupant = white_king;
                white_king->location = &squares[index];
            }
            if (name == "A2")
            {
                squares[index].occupant = white_pawn1;
                white_pawn1->location = &squares[index];
            }
            if (name == "B2")
            {
                squares[index].occupant = white_pawn2;
                white_pawn2->location = &squares[index];
            }
            if (name == "C2")
            {
                squares[index].occupant = white_pawn3;
                white_pawn3->location = &squares[index];
            }
            if (name == "D2")
            {
                squares[index].occupant = white_pawn4;
                white_pawn4->location = &squares[index];
            }
            if (name == "E2")
            {
                squares[index].occupant = white_pawn5;
                white_pawn5->location = &squares[index];
            }
            if (name == "F2")
            {
                squares[index].occupant = white_pawn6;
                white_pawn6->location = &squares[index];
            }
            if (name == "G2")
            {
                squares[index].occupant = white_pawn7;
                white_pawn7->location = &squares[index];
            }
            if (name == "H2")
            {
                squares[index].occupant = white_pawn8;
                white_pawn8->location = &squares[index];
            }

            if (name == "A7")
            {
                squares[index].occupant = black_pawn1;
                black_pawn1->location = &squares[index];
            }
            if (name == "B7")
            {
                squares[index].occupant = black_pawn2;
                black_pawn2->location = &squares[index];
            }
            if (name == "C7")
            {
                squares[index].occupant = black_pawn3;
                black_pawn3->location = &squares[index];
            }
            if (name == "D7")
            {
                squares[index].occupant = black_pawn4;
                black_pawn4->location = &squares[index];
            }
            if (name == "E7")
            {
                squares[index].occupant = black_pawn5;
                black_pawn5->location = &squares[index];
            }
            if (name == "F7")
            {
                squares[index].occupant = black_pawn6;
                black_pawn7->location = &squares[index];
            }
            if (name == "G7")
            {
                squares[index].occupant = black_pawn7;
                black_pawn7->location = &squares[index];
            }
            if (name == "H7")
            {
                squares[index].occupant = black_pawn8;
                black_pawn8->location = &squares[index];
            }
            if (name == "A8")
            {
                squares[index].occupant = black_rook1;
                black_rook1->location = &squares[index];
            }
            if (name == "H8")
            {
                squares[index].occupant = black_rook2;
                black_rook2->location = &squares[index];
            }
            if (name == "B8")
            {
                squares[index].occupant = black_knight1;
                black_knight1->location = &squares[index];
            }
            if (name == "G8")
            {
                squares[index].occupant = black_knight2;
                black_knight2->location = &squares[index];
            }
            if (name == "C8")
            {
                squares[index].occupant = black_bishop1;
                black_bishop1->location = &squares[index];
            }
            if (name == "F8")
            {
                squares[index].occupant = black_bishop2;
                black_bishop2->location = &squares[index];
            }
            if (name == "D8")
            {
                squares[index].occupant = black_queen;
                black_queen->location = &squares[index];
            }
            if (name == "E8")
            {
                squares[index].occupant = black_king;
                black_king->location = &squares[index];
            }
            index++;
        }
    }
}

board::~board()
{
    for (auto idx = 0; idx < 64; idx++)
    {
        if (squares[idx].occupant)
        {
            delete squares[idx].occupant;
        }
    }
    delete[] squares;
}

void board::update_attacked_squares()
{
    for (auto idx = 0; idx < 64; idx++)
    {
        if (squares[idx].occupant)
        {
            if (squares[idx].occupant->color == '0')
            {
                switch(squares[idx].occupant->type)
                {
                    case 'R':
                        break;
                    case 'N':
                        break;
                    case 'B':
                        break;
                    case 'P':
                        break;
                    case 'Q':
                        break;
                    case 'K':
                        break;
                }
            }
            else
            {
                switch(squares[idx].occupant->type)
                {
                    case 'R':
                        break;
                    case 'N':
                        break;
                    case 'B':
                        break;
                    case 'P':
                        break;
                    case 'Q':
                        break;
                    case 'K':
                        break;
                }
            }
        }
    }
}
