#include "board.h"
#include "pieces.h"
#include <iostream>

board::board()
{
    squares = new square[64];
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

square * board::copy_board(square *A1)
{
    square *copy = new square[64];
    piece *new_piece = NULL;
    for (auto idx = 0; idx < 64; idx++)
    {
        copy[idx].name = squares[idx].name;
        if (A1[idx].occupant)
        {
            new_piece = new piece;
            new_piece->color = A1[idx].occupant->color;
            new_piece->value = A1[idx].occupant->value;
            new_piece->type = A1[idx].occupant->type;
            new_piece->move_count = A1[idx].occupant->move_count;
            new_piece->location = &copy[idx];
            copy[idx].occupant = new_piece;
            new_piece = NULL;
        }
    }
    return copy;
}

void board::move(piece *aPiece, square *to)
{
    if (to->occupant)
    {
        delete to->occupant;
    } 
    aPiece->location->occupant = NULL;
    to->occupant = aPiece;
    aPiece->location = to;
    aPiece->move_count++;
}

void board::update_attacked_squares(std::vector<square> &white, std::vector<square> &black, square *aBoard)
{
    white.clear();
    black.clear();
    
    for (auto idx = 0; idx < 64; idx++)
    {
        if (aBoard[idx].occupant)
        {
            if (aBoard[idx].occupant->color == 0)
            {
                switch(aBoard[idx].occupant->type)
                {
                    case 'R':
                        orthog_up(white, idx, 0, aBoard);
                        orthog_down(white, idx, 0, aBoard);
                        orthog_left(white, idx, 0, aBoard);
                        orthog_right(white, idx, 0, aBoard);
                        break;
                    case 'N':
                        knight_jump(white, idx, 0, aBoard);
                        break;
                    case 'B':
                        diag_down_left(white, idx, 0, aBoard);
                        diag_down_right(white, idx, 0, aBoard);
                        diag_up_left(white, idx, 0, aBoard);
                        diag_up_right(white, idx, 0, aBoard);
                        break;
                    case 'P':
                        pawn_attack(white, idx, 0, aBoard);
                        break;
                    case 'Q':
                        orthog_up(white, idx, 0, aBoard);
                        orthog_down(white, idx, 0, aBoard);
                        orthog_left(white, idx, 0, aBoard);
                        orthog_right(white, idx, 0, aBoard);
                        diag_down_left(white, idx, 0, aBoard);
                        diag_down_right(white, idx, 0, aBoard);
                        diag_up_left(white, idx, 0, aBoard);
                        diag_up_right(white, idx, 0, aBoard);
                        break;
                    case 'K':
                        king_attack(white, idx, 0, aBoard);
                        break;
                }
            }
            else if (aBoard[idx].occupant->color == 1)
            {
                switch(aBoard[idx].occupant->type)
                {
                    case 'R':
                        orthog_down(black, idx, 1, aBoard);
                        orthog_left(black, idx, 1, aBoard);
                        orthog_right(black, idx, 1, aBoard);
                        orthog_up(black, idx, 1, aBoard);
                        break;
                    case 'N':
                        knight_jump(black, idx, 1, aBoard);
                        break;
                    case 'B':
                        diag_up_right(black, idx, 1, aBoard);
                        diag_up_left(black, idx, 1, aBoard);
                        diag_down_right(black, idx, 1, aBoard);
                        diag_down_left(black, idx, 1, aBoard);
                        break;
                    case 'P':
                        pawn_attack(black, idx, 1, aBoard);
                        break;
                    case 'Q':
                        orthog_down(black, idx, 1, aBoard);
                        orthog_left(black, idx, 1, aBoard);
                        orthog_right(black, idx, 1, aBoard);
                        orthog_up(black, idx, 1, aBoard);
                        diag_up_right(black, idx, 1, aBoard);
                        diag_up_left(black, idx, 1, aBoard);
                        diag_down_right(black, idx, 1, aBoard);
                        diag_down_left(black, idx, 1, aBoard);
                        break;
                    case 'K':
                        king_attack(black, idx, 1, aBoard);
                        break;
                }
            }
        }
    }
}

void board::orthog_up(std::vector<square> &data, int index, int color, square *aBoard)
{
    if (index % 8 == 7) return;
    index++;
    while (index < 64 && index % 8 != 7)
    {   
        if (aBoard[index].occupant != NULL) break;
        data.push_back(aBoard[index]);
        index++;
    }
    if (index > 63) return;
    if (aBoard[index].occupant) 
    {
        if (aBoard[index].occupant->color == color) return;
        else 
        {
            data.push_back(aBoard[index]);
            return;
        }
    }
    else data.push_back(aBoard[index]);
}

void board::orthog_down(std::vector<square> &data, int index, int color, square *aBoard)
{
    if (index % 8 == 0) return;
    index--;
    while (index > -1 && index % 8 != 0)
    {
        if (aBoard[index].occupant != NULL) break;
        data.push_back(aBoard[index]);
        index--;
    }
    if (index < 0) return;
    if (aBoard[index].occupant) 
    {
        if (aBoard[index].occupant->color == color) return;
        else 
        {
            data.push_back(aBoard[index]);
            return;
        }
    }
    else data.push_back(aBoard[index]);
}

void board::orthog_left(std::vector<square> &data, int index, int color, square *aBoard)
{
    if (index < 8) return;
    index -= 8;
    while (index > 7)
    {
        if (aBoard[index].occupant != NULL) break;
        data.push_back(aBoard[index]);
        index -= 8;
    }
    if (index < 0) return;
    if (aBoard[index].occupant) 
    {
        if (aBoard[index].occupant->color == color) return;
        else 
        {
            data.push_back(aBoard[index]);
            return;
        }
    }
    else data.push_back(aBoard[index]);
}

void board::orthog_right(std::vector<square> &data, int index, int color, square *aBoard)
{
    if (index > 55) return;
    index += 8;
    while (index < 56)
    {
        if (aBoard[index].occupant != NULL) break;
        data.push_back(aBoard[index]);
        index += 8;
    }
    if (index > 63) return;
    if (aBoard[index].occupant) 
    {
        if (aBoard[index].occupant->color == color) return;
        else 
        {
            data.push_back(aBoard[index]);
            return;
        }
    }
    else data.push_back(aBoard[index]);
}

void board::diag_up_left(std::vector<square> &data, int index, int color, square *aBoard)
{
    if (index < 8 || index % 8 == 7) return;
    index -= 7;
    while (index > 7 && index % 8 != 7)
    {
        if (aBoard[index].occupant != NULL) break;
        data.push_back(aBoard[index]);
        index -= 7;
    }
    if (index < 0) return;
    if (aBoard[index].occupant) 
    {
        if (aBoard[index].occupant->color == color) return;
        else 
        {
            data.push_back(aBoard[index]);
            return;
        }
    }
    else data.push_back(aBoard[index]);
}

void board::diag_up_right(std::vector<square> &data, int index, int color, square *aBoard)
{
    if (index > 55 || index % 8 == 7) return;
    index += 9;
    while (index < 56 && index % 8 != 7)
    {
        if (aBoard[index].occupant != NULL) break;
        data.push_back(aBoard[index]);
        index += 9;
    }
    if (index > 63) return;
    if (aBoard[index].occupant) 
    {
        if (aBoard[index].occupant->color == color) return;
        else 
        {
            data.push_back(aBoard[index]);
            return;
        }
    }
    else data.push_back(aBoard[index]);
}

void board::diag_down_left(std::vector<square> &data, int index, int color, square *aBoard)
{
    if (index < 8 || index % 8 == 0) return;
    index -= 9;
    while (index > 7 && index % 8 != 0)
    {
        if (aBoard[index].occupant != NULL) break;
        data.push_back(aBoard[index]);
        index -= 9;
    }
    if (index < 0) return;
    if (aBoard[index].occupant) 
    {
        if (aBoard[index].occupant->color == color) return;
        else 
        {
            data.push_back(aBoard[index]);
            return;
        }
    }
    else data.push_back(aBoard[index]);
}

void board::diag_down_right(std::vector<square> &data, int index, int color, square *aBoard)
{
    if (index > 55 || index % 8 == 0) return;
    index += 7;
    while (index < 56 && index % 8 != 0)
    {
        if (aBoard[index].occupant != NULL) break;
        data.push_back(aBoard[index]);
        index += 7;
    }
    if (index < 0) return;
    if (aBoard[index].occupant) 
    {
        if (aBoard[index].occupant->color == color) return;
        else 
        {
            data.push_back(aBoard[index]);
            return;
        }
    }
    else data.push_back(aBoard[index]);
}

void board::knight_jump(std::vector<square> &data, int index, int color, square *aBoard)
{
    if (index > 7 && index % 8 != 6 && index % 8 != 7)
    {
        if (aBoard[index - 6].occupant == NULL) data.push_back(aBoard[index - 6]);
        else if (aBoard[index - 6].occupant->color != color) data.push_back(aBoard[index - 6]);
    }
    if (index < 56 && index % 8 != 6 && index % 8 != 7)
    {
        if (aBoard[index + 10].occupant == NULL) data.push_back(aBoard[index + 10]);
        else if (aBoard[index + 10].occupant->color != color) data.push_back(aBoard[index + 10]);
    }
    if (index % 8 != 7 && index > 15)
    {
        if (aBoard[index - 15].occupant == NULL)  data.push_back(aBoard[index - 15]);
        else if (aBoard[index- 15].occupant->color != color)  data.push_back(aBoard[index - 15]);
    }
    if (index % 8 != 7 && index < 48)
    {
        if (aBoard[index + 17].occupant == NULL) data.push_back(aBoard[index +17]);
        else if (aBoard[index + 17].occupant->color != color) data.push_back(aBoard[index +17]);
    }
    if (index % 8 != 0 && index > 15)
    {
        if (aBoard[index- 17].occupant == NULL) data.push_back(aBoard[index - 17]);
        else if (aBoard[index - 17].occupant->color != color) data.push_back(aBoard[index - 17]);
    }
    if (index % 8 != 0 && index < 48)
    {
        if (aBoard[index + 15].occupant == NULL) data.push_back(aBoard[index + 15]);
        else if (aBoard[index + 15].occupant->color != color) data.push_back(aBoard[index + 15]);
    }
    if (index % 8 != 0 && index % 8 != 1 && index > 7)
    {
        if (aBoard[index - 10].occupant == NULL) data.push_back(aBoard[index - 10]);
        else if (aBoard[index - 10].occupant->color != color) data.push_back(aBoard[index - 10]);
    }
    if (index % 8 != 0 && index % 8 != 1 && index < 56)
    {
        if (aBoard[index + 6].occupant == NULL) data.push_back(aBoard[index + 6]);
        else if (aBoard[index + 6].occupant->color != color) data.push_back(aBoard[index + 6]);   
    }
}

void board::king_attack(std::vector<square> &data, int index, int color, square *aBoard)
{
    if (index % 8 != 7)
    {
        if (aBoard[index + 1].occupant == NULL) data.push_back(aBoard[index + 1]);
        else if (aBoard[index + 1].occupant->color != color) data.push_back(aBoard[index + 1]);
    }
    if (index > 7)
    {
        if (aBoard[index - 8].occupant == NULL) data.push_back(aBoard[index - 8]);
        else if (aBoard[index - 8].occupant->color != color) data.push_back(aBoard[index - 8]);
    }
    if (index % 8 != 0)
    {
        if (aBoard[index - 1].occupant == NULL) data.push_back(aBoard[index - 1]);
        else if (aBoard[index - 1].occupant->color != color) data.push_back(aBoard[index - 1]);
    }
    if (index < 56)
    {
        if (aBoard[index + 8].occupant == NULL) data.push_back(aBoard[index + 8]);
        else if (aBoard[index + 8].occupant->color != color) data.push_back(aBoard[index + 8]);
    }
    if (index > 7 && index % 8 != 7)
    {
        if (aBoard[index - 7].occupant == NULL) data.push_back(aBoard[index - 7]);
        else if (aBoard[index - 7].occupant->color != color) data.push_back(aBoard[index - 7]);
    }
    if (index < 56 && index % 8 != 7)
    {
        if (aBoard[index + 9].occupant == NULL) data.push_back(aBoard[index + 9]);
        else if (aBoard[index + 9].occupant->color != color) data.push_back(aBoard[index + 9]);
    }
    if (index > 7 && index % 8 != 0)
    {
        if (aBoard[index - 9].occupant == NULL) data.push_back(aBoard[index - 9]);
        else if (aBoard[index - 9].occupant->color != color) data.push_back(aBoard[index - 9]);
    }
    if (index < 56 && index % 8 != 0)
    {
        if (aBoard[index + 7].occupant == NULL) data.push_back(aBoard[index + 7]);
        else if (aBoard[index + 7].occupant->color != color) data.push_back(aBoard[index + 7]);
    }
}

void board::pawn_attack(std::vector<square> &data, int index, int color, square *aBoard)
{
    if (color == 0)
    {
        if (index > 7 && index % 8 != 7)
        {
            if (aBoard[index - 7].occupant == NULL) data.push_back(aBoard[index - 7]);
            else if (aBoard[index - 7].occupant->color != color) data.push_back(aBoard[index - 7]);
        }
        if (index < 56 && index % 8 != 7)
        {
            if (aBoard[index + 9].occupant == NULL) data.push_back(aBoard[index + 9]);
            else if (aBoard[index + 9].occupant->color != color) data.push_back(aBoard[index + 9]);
        }
    }
    else if (color == 1)
    {
        if (index > 7 && index % 8 != 0)
        {
            if (aBoard[index - 9].occupant == NULL) data.push_back(aBoard[index - 9]);
            else if (aBoard[index - 9].occupant->color != color) data.push_back(aBoard[index - 9]);
        }
        if (index < 56 && index % 8 != 0)
        {
            if (aBoard[index + 7].occupant == NULL) data.push_back(aBoard[index + 7]);
            else if (aBoard[index + 7].occupant->color != color) data.push_back(aBoard[index + 7]);
        }
    }
}

bool board::check_for_check(int piece_index, int destination)
{
    square *copy = copy_board(squares);
    int color = copy[piece_index].occupant->color;
    std::vector<square> white;
    std::vector<square> black;
    std::string king_square;

    move(copy[piece_index].occupant, &copy[destination]);
    update_attacked_squares(white, black, copy);

    for (auto idx = 0; idx < 64; idx++)
    {
        if (copy[idx].occupant)
        {
            if (copy[idx].occupant->color == color && copy[idx].occupant->type == 'K')
            {
                king_square = copy[idx].name;
            }
        }
    }

    if (color == 0)
    {
        for (long unsigned int idx = 0; idx < black.size(); idx++)
        {
            if (black[idx].name == king_square) return true;
        }
    }
    else if (color == 1)
    {
        for (long unsigned int idx = 0; idx < white.size(); idx++)
        {
            if (white[idx].name == king_square) return true;
        }
    }
    return false;
}