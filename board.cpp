#include "board.h"
#include "pieces.h"
#include <iostream>

board::board()
{
    squares = new square[65];
    std::string name;
    char letter = '@';
    int index = 0;

    piece *white_pawn1 = new piece;
    white_pawn1->color = 0;
    white_pawn1->type = 'P';
    white_pawn1->value = 1;
    piece *white_pawn2 = new piece;
    white_pawn2->color = 0;
    white_pawn2->type = 'P';
    white_pawn2->value = 1;
    piece *white_pawn3 = new piece;
    white_pawn3->color = 0;
    white_pawn3->type = 'P';
    white_pawn3->value = 1;
    piece *white_pawn4 = new piece;
    white_pawn4->color = 0;
    white_pawn4->type = 'P';
    white_pawn4->value = 1;
    piece *white_pawn5 = new piece;
    white_pawn5->color = 0;
    white_pawn5->type = 'P';
    white_pawn5-> value = 1;
    piece *white_pawn6 = new piece;
    white_pawn6->color = 0;
    white_pawn6->type = 'P';
    white_pawn6->value = 1;
    piece *white_pawn7 = new piece;
    white_pawn7->color = 0;
    white_pawn7->type = 'P';
    white_pawn7->value = 1;
    piece *white_pawn8 = new piece;
    white_pawn8->color = 0;
    white_pawn8->type = 'P';
    white_pawn8->value = 1;

    piece *black_pawn1 = new piece;
    black_pawn1->color = 1;
    black_pawn1->type = 'P';
    black_pawn1->value = -1;
    piece *black_pawn2 = new piece;
    black_pawn2->color = 1;
    black_pawn2->type = 'P';
    black_pawn2->value = -1;
    piece *black_pawn3 = new piece;
    black_pawn3->color = 1;
    black_pawn3->type = 'P';
    black_pawn3->value = -1;
    piece *black_pawn4 = new piece;
    black_pawn4->color = 1;
    black_pawn4->type = 'P';
    black_pawn4-> value = -1;
    piece *black_pawn5 = new piece;
    black_pawn5->color = 1;
    black_pawn5->type = 'P';
    black_pawn5->value = -1;
    piece *black_pawn6 = new piece;
    black_pawn6->color = 1;
    black_pawn6->type = 'P';
    black_pawn6->value = -1;
    piece *black_pawn7 = new piece;
    black_pawn7->color = 1;
    black_pawn7->type = 'P';
    black_pawn7->value = -1;
    piece *black_pawn8 = new piece;
    black_pawn8->color = 1;
    black_pawn8->type = 'P';
    black_pawn8->value = -1;

    piece *white_rook1 = new piece;
    white_rook1->color = 0;
    white_rook1->type = 'R';
    white_rook1->value = 5;
    piece *white_rook2 = new piece;
    white_rook2->color = 0;
    white_rook2->type = 'R';
    white_rook2->value = 5;

    piece *black_rook1 = new piece;
    black_rook1->color = 1;
    black_rook1->type = 'R';
    black_rook1->value = -5;
    piece *black_rook2 = new piece;
    black_rook2->color = 1;
    black_rook2->type = 'R';
    black_rook2->value = -5;

    piece *white_knight1 = new piece;
    white_knight1->color = 0;
    white_knight1->type = 'N';
    white_knight1->value = 3;
    piece *white_knight2 = new piece;
    white_knight2->color = 0;
    white_knight2->type = 'N';
    white_knight2->value = 3;

    piece *black_knight1 = new piece;
    black_knight1->color = 1;
    black_knight1->type = 'N';
    black_knight1->value = -3;
    piece *black_knight2 = new piece;
    black_knight2->color = 1;
    black_knight2->type = 'N';
    black_knight2->value = -3;

    piece *white_bishop1 = new piece;
    white_bishop1->color = 0;
    white_bishop1->type = 'B';
    white_bishop1->value = 3;
    piece *white_bishop2 = new piece;
    white_bishop2->color = 0;
    white_bishop2->type = 'B';
    white_bishop2->value = 3;

    piece *black_bishop1 = new piece;
    black_bishop1->color = 1;
    black_bishop1->type = 'B';
    black_bishop1->value = -3;
    piece *black_bishop2 = new piece;
    black_bishop2->color = 1;
    black_bishop2->type = 'B';
    black_bishop2->value = -3;

    piece *white_king = new piece;
    white_king->color = 0;
    white_king->type = 'K';
    white_king->value = 1000;
    piece *white_queen = new piece;
    white_queen->color = 0;
    white_queen->type = 'Q';
    white_queen->value = 9;

    piece *black_king = new piece;
    black_king->color = 1;
    black_king->type = 'K';
    black_king->value = -1000;
    piece *black_queen = new piece;
    black_queen->color = 1;
    black_queen->type = 'Q';
    black_queen->value = -9;

    for (auto idx = 0; idx < 8; idx++)
    {
        letter += 1;
        for (auto jdx = 0; jdx < 8; jdx++)
        {
            name = letter + std::to_string(jdx + 1);
            squares[index].name = name;
            squares[index].occupant = NULL;
            squares[index].index = index;

            if (name == "A1")
            {
                squares[index].occupant = white_rook1;
                white_rook1->location = &squares[index];
            }
            else if (name == "H1")
            {
                squares[index].occupant = white_rook2;
                white_rook2->location = &squares[index];
            }
            else if (name == "B1")
            {
                squares[index].occupant = white_knight1;
                white_knight1->location = &squares[index];
            }
            else if (name == "G1")
            {
                squares[index].occupant = white_knight2;
                white_knight2->location = &squares[index];
            }
            else if (name == "C1")
            {
                squares[index].occupant = white_bishop1;
                white_bishop1->location = &squares[index];
            }
            else if (name == "F1")
            {
                squares[index].occupant = white_bishop2;
                white_bishop2->location = &squares[index];
            }
            else if (name == "D1")
            {
                squares[index].occupant = white_queen;
                white_queen->location = &squares[index];
            }
            else if (name == "E1")
            {
                squares[index].occupant = white_king;
                white_king->location = &squares[index];
            }
            else if (name == "A2")
            {
                squares[index].occupant = white_pawn1;
                white_pawn1->location = &squares[index];
            }
            else if (name == "B2")
            {
                squares[index].occupant = white_pawn2;
                white_pawn2->location = &squares[index];
            }
            else if (name == "C2")
            {
                squares[index].occupant = white_pawn3;
                white_pawn3->location = &squares[index];
            }
            else if (name == "D2")
            {
                squares[index].occupant = white_pawn4;
                white_pawn4->location = &squares[index];
            }
            else if (name == "E2")
            {
                squares[index].occupant = white_pawn5;
                white_pawn5->location = &squares[index];
            }
            else if (name == "F2")
            {
                squares[index].occupant = white_pawn6;
                white_pawn6->location = &squares[index];
            }
            else if (name == "G2")
            {
                squares[index].occupant = white_pawn7;
                white_pawn7->location = &squares[index];
            }
            else if (name == "H2")
            {
                squares[index].occupant = white_pawn8;
                white_pawn8->location = &squares[index];
            }

            else if (name == "A7")
            {
                squares[index].occupant = black_pawn1;
                black_pawn1->location = &squares[index];
            }
            else if (name == "B7")
            {
                squares[index].occupant = black_pawn2;
                black_pawn2->location = &squares[index];
            }
            else if (name == "C7")
            {
                squares[index].occupant = black_pawn3;
                black_pawn3->location = &squares[index];
            }
            else if (name == "D7")
            {
                squares[index].occupant = black_pawn4;
                black_pawn4->location = &squares[index];
            }
            else if (name == "E7")
            {
                squares[index].occupant = black_pawn5;
                black_pawn5->location = &squares[index];
            }
            else if (name == "F7")
            {
                squares[index].occupant = black_pawn6;
                black_pawn6->location = &squares[index];
            }
            else if (name == "G7")
            {
                squares[index].occupant = black_pawn7;
                black_pawn7->location = &squares[index];
            }
            else if (name == "H7")
            {
                squares[index].occupant = black_pawn8;
                black_pawn8->location = &squares[index];
            }
            else if (name == "A8")
            {
                squares[index].occupant = black_rook1;
                black_rook1->location = &squares[index];
            }
            else if (name == "H8")
            {
                squares[index].occupant = black_rook2;
                black_rook2->location = &squares[index];
            }
            else if (name == "B8")
            {
                squares[index].occupant = black_knight1;
                black_knight1->location = &squares[index];
            }
            else if (name == "G8")
            {
                squares[index].occupant = black_knight2;
                black_knight2->location = &squares[index];
            }
            else if (name == "C8")
            {
                squares[index].occupant = black_bishop1;
                black_bishop1->location = &squares[index];
            }
            else if (name == "F8")
            {
                squares[index].occupant = black_bishop2;
                black_bishop2->location = &squares[index];
            }
            else if (name == "D8")
            {
                squares[index].occupant = black_queen;
                black_queen->location = &squares[index];
            }
            else if (name == "E8")
            {
                squares[index].occupant = black_king;
                black_king->location = &squares[index];
            }
            else squares[index].occupant = NULL;
            index++;
        }
    }
    squares[64].whose_turn = 0;
    squares[64].occupant = NULL;
}

board::~board()
{
    for (auto idx = 0; idx < 65; idx++)
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
    square *copy = NULL;
    copy = new square[65];
    piece *new_piece = NULL;
    for (auto idx = 0; idx < 64; idx++)
    {
        copy[idx].name = squares[idx].name;
        copy[idx].index = idx;
        if (A1[idx].occupant)
        {
            new_piece = new piece;
            new_piece->color = A1[idx].occupant->color;
            new_piece->value = A1[idx].occupant->value;
            new_piece->type = A1[idx].occupant->type;
            new_piece->move_count = A1[idx].occupant->move_count;
            new_piece->location = &copy[idx];
            new_piece->en_passant = A1[idx].occupant->en_passant;
            copy[idx].occupant = new_piece;
            new_piece = NULL;
        }
        else copy[idx].occupant = NULL;
    }
    copy[64].whose_turn = A1[64].whose_turn;
    copy[64].white_castled = A1[64].white_castled;
    copy[64].black_castled = A1[64].black_castled;
    copy[64].white_in_check = A1[64].white_in_check;
    copy[64].black_in_check = A1[64].black_in_check;
    copy[64].checkmate = A1[64].checkmate;
    return copy;
}

void board::move(piece *aPiece, square *to, square* aBoard)
{
    bool en_passant_capture = false;
    bool castle = false;
    bool promotion = false;
    char promotion_type;
    int en_passant_index = to->index;

    if (aPiece->type == 'P' && aPiece->color == 0 && to->index % 8 == 7) promotion = true;
    if (aPiece->type == 'P' && aPiece->color == 1 && to->index % 8 == 0) promotion = true;

    if (aPiece->type == 'P' && aPiece->color == 0 && aPiece->location->index % 8 == 4)
    {
        if (en_passant_index != aPiece->location->index + 1 && to->occupant == NULL)
        {
            en_passant_capture = true;
        }
    }

    if (aPiece->type == 'P' && aPiece->color == 1 && aPiece->location->index % 8 == 3)
    {
        if (en_passant_index != aPiece->location->index - 1 && to->occupant == NULL)
        {
            en_passant_capture = true;
        }
    }

    if (aPiece->type == 'K' && aPiece->move_count == 0)
    {
        if (to->index == 48 || to->index == 55 || to->index == 16 || to->index ==23)
        {
            castle = true;
        }
    }

    if (to->occupant)
    {
        delete to->occupant;
    } 
    aPiece->location->occupant = NULL;
    to->occupant = aPiece;
    aPiece->location = to;
    aPiece->move_count++;

    if (promotion)
    {
        promotion_type = promote();
        aPiece->type = promotion_type;
        if (aPiece->color == 0)
        {
            if (aPiece->type == 'Q') aPiece->value = 9;
            if (aPiece->type == 'R') aPiece->value = 5;
            if (aPiece->type == 'B') aPiece->value = 3;
            if (aPiece->type == 'N') aPiece->value = 3;
        }
        if (aPiece->color == 1)
        {
            if (aPiece->type == 'Q') aPiece->value = -9;
            if (aPiece->type == 'R') aPiece->value = -5;
            if (aPiece->type == 'B') aPiece->value = -3;
            if (aPiece->type == 'N') aPiece->value = -3;
        }
    }

    if (castle)
    {
        if (aPiece->color == 0)
        {
            if (aPiece->location->index == 48)
            {
                aBoard[40].occupant = aBoard[56].occupant;
                aBoard[56].occupant->location = &aBoard[40];
                aBoard[56].occupant = NULL;
            }
            if (aPiece->location->index == 16)
            {
                aBoard[24].occupant = aBoard[0].occupant;
                aBoard[0].occupant->location = &aBoard[24];
                aBoard[0].occupant = NULL;
            }
            aBoard[64].white_castled = true;
        }
        if (aPiece->color == 1)
        {
            if (aPiece->location->index == 55)
            {
                aBoard[47].occupant = aBoard[63].occupant;
                aBoard[63].occupant->location = &aBoard[47];
                aBoard[63].occupant = NULL;
            }
            if (aPiece->location->index == 23)
            {
                aBoard[31].occupant = aBoard[7].occupant;
                aBoard[7].occupant->location = &aBoard[31];
                aBoard[7].occupant = NULL;
            }
            aBoard[64].black_castled = true;
        }
    }

    if (en_passant_capture)
    {
        if (aPiece->color == 0)
        {
            delete aBoard[en_passant_index - 1].occupant;
            aBoard[en_passant_index - 1].occupant = NULL;
        }
        if (aPiece->color == 1)
        {
            delete aBoard[en_passant_index + 1].occupant;
            aBoard[en_passant_index + 1].occupant = NULL;
        }
    }

    for (auto idx = 0; idx < 64; idx++)
    {
        if (aBoard[idx].occupant)
        {
            aBoard[idx].occupant->en_passant = false;
        }
    }

    if (aPiece->type == 'P' && aPiece->move_count == 1)
    {
        if (aPiece->color == 0 && en_passant_index % 8 == 3)
        {
            aPiece->en_passant = true;
        }
        if (aPiece->color == 1 && en_passant_index % 8 == 4)
        {
            aPiece->en_passant = true;
        }
    }

    if (aBoard[64].whose_turn == 0)
    {
        aBoard[64].whose_turn = 1;
        return;
    }
    if (aBoard[64].whose_turn == 1) 
    {
        aBoard[64].whose_turn = 0;
        return;
    }

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

bool board::pawn_move(int piece_index, int destination, square* aBoard)
{
    if (aBoard[piece_index].occupant->type != 'P') return false;
    std::vector<square> potential_moves;
    int color = aBoard[piece_index].occupant->color;

    if (color == 0)
    {
        if (piece_index > 7 && piece_index % 8 != 7)
        {
            if (aBoard[piece_index - 7].occupant)
                if (aBoard[piece_index - 7].occupant->color != color) potential_moves.push_back(aBoard[piece_index - 7]);
        }
        if (piece_index < 56 && piece_index % 8 != 7)
        {
            if (aBoard[piece_index + 9].occupant)
                if (aBoard[piece_index + 9].occupant->color != color) potential_moves.push_back(aBoard[piece_index + 9]);
        }
    }
    else if (color == 1)
    {
        if (piece_index > 7 && piece_index % 8 != 0)
        {
            if (aBoard[piece_index - 9].occupant)
                if (aBoard[piece_index - 9].occupant->color != color) potential_moves.push_back(aBoard[piece_index - 9]);
        }
        if (piece_index < 56 && piece_index % 8 != 0)
        {
            if (aBoard[piece_index + 7].occupant)
                if (aBoard[piece_index + 7].occupant->color != color) potential_moves.push_back(aBoard[piece_index + 7]);
        }
    }

    if (color == 0)
    {
        if (piece_index % 8 != 7)
        {
            if (aBoard[piece_index + 1].occupant == NULL) potential_moves.push_back(aBoard[piece_index + 1]);
        }
        if (aBoard[piece_index].occupant->move_count == 0)
        {
            if (aBoard[piece_index + 1].occupant == NULL && aBoard[piece_index + 2].occupant == NULL)
            {
                potential_moves.push_back(aBoard[piece_index + 2]);
            }
        }
        if (piece_index % 8 == 4)
        {
            if (piece_index > 7)
            {
                if (aBoard[piece_index - 8].occupant)
                {
                    if (aBoard[piece_index - 8].occupant->type == 'P' && aBoard[piece_index - 8].occupant->move_count == 1
                    && aBoard[piece_index - 8].occupant->color == 1)
                    {
                        if (aBoard[piece_index - 8].occupant->en_passant == true)
                        {
                            potential_moves.push_back(aBoard[piece_index - 7]);
                        }
                    }
                }
            }
            if (piece_index < 56)
            {
                if (aBoard[piece_index + 8].occupant)
                {
                    if (aBoard[piece_index + 8].occupant->type == 'P' && aBoard[piece_index + 8].occupant->move_count == 1
                    && aBoard[piece_index + 8].occupant->color == 1)
                    {
                        if (aBoard[piece_index + 8].occupant->en_passant == true)
                        {
                            potential_moves.push_back(aBoard[piece_index + 9]);
                        }
                    }
                }
            }
        }
    }

    if (color == 1)
    {
        if (piece_index % 8 != 0)
        {
            if (aBoard[piece_index - 1].occupant == NULL) potential_moves.push_back(aBoard[piece_index - 1]);
        }
        if (aBoard[piece_index].occupant->move_count == 0)
        {
            if (aBoard[piece_index - 1].occupant == NULL && aBoard[piece_index - 2].occupant == NULL)
            {
                potential_moves.push_back(aBoard[piece_index - 2]);
            }
        }
        if (piece_index % 8 == 3)
        {
            if (piece_index > 7)
            {
                if (aBoard[piece_index - 8].occupant)
                {
                    if (aBoard[piece_index - 8].occupant->type == 'P' && aBoard[piece_index - 8].occupant->move_count == 1
                    && aBoard[piece_index - 8].occupant->color == 0)
                    {
                        if (aBoard[piece_index - 8].occupant->en_passant == true)
                        {
                            potential_moves.push_back(aBoard[piece_index - 9]);
                        }
                    }
                }
            }
            if (piece_index < 56)
            {
                if (aBoard[piece_index + 8].occupant)
                {
                    if (aBoard[piece_index + 8].occupant->type == 'P' && aBoard[piece_index + 8].occupant->move_count == 1
                    && aBoard[piece_index + 8].occupant->color == 0)
                    {
                        if (aBoard[piece_index + 8].occupant->en_passant == true)
                        {
                            potential_moves.push_back(aBoard[piece_index + 7]);
                        }
                    }
                }
            }
        }
    }

    for (long unsigned int idx = 0; idx < potential_moves.size(); idx++)
    {
        if (potential_moves[idx].index == destination) return true;
    }

    return false;
}

bool board::king_move(int piece_index, int destination, square *aBoard)
{
    std::vector<square> potential_moves;
    std::vector<square> white;
    std::vector<square> black;
    int color = aBoard[piece_index].occupant->color;
    bool white_short = false;
    bool white_long = false;
    bool black_short = false;
    bool black_long = false;

    if (aBoard[piece_index].occupant->type != 'K') return false;

    king_attack(potential_moves, piece_index, aBoard[piece_index].occupant->color, aBoard);
    update_attacked_squares(white, black, aBoard);

    if (color == 0 && aBoard[piece_index].occupant->move_count == 0)
    {
        if (aBoard[56].occupant)
        {
            if (aBoard[56].occupant->move_count == 0)
            {
                if (aBoard[40].occupant == NULL && aBoard[48].occupant == NULL)
                {
                    white_short = true;
                    for (long unsigned int idx = 0; idx < black.size(); idx++)
                    {
                        if (black[idx].index == 40 || black[idx].index == 48)
                        {
                            white_short = false;
                        }
                    
                    }
                }
            }
        }
        if (aBoard[0].occupant)
        {
            if (aBoard[0].occupant->move_count == 0)
            {
                if (aBoard[16].occupant == NULL && aBoard[24].occupant == NULL)
                {
                    white_long = true;
                    for (long unsigned int idx = 0; idx < black.size(); idx++)
                    {
                        if (black[idx].index == 16 || black[idx].index == 24)
                        {
                            white_long = false;
                        }
                    }
                }
            }
        }
    }
    if (color == 1 && aBoard[piece_index].occupant->move_count == 0)
    {
        if (aBoard[63].occupant)
        {
            if (aBoard[63].occupant->move_count == 0)
            {
                if (aBoard[47].occupant == NULL && aBoard[55].occupant == NULL)
                {
                    black_short = true;
                    for (long unsigned int idx = 0; idx < white.size(); idx++)
                    {
                        if (white[idx].index == 47 || white[idx].index == 55)
                        {
                            black_short = false;
                        }
                    }
                }
            }
        }
        if (aBoard[7].occupant)
        {
            if (aBoard[7].occupant->move_count == 0)
            {
                if (aBoard[23].occupant == NULL && aBoard[31].occupant == NULL)
                {
                    black_long = true;
                    for (long unsigned int idx = 0; idx < white.size(); idx++)
                    {
                        if (white[idx].index == 23 || white[idx].index == 31)
                        {
                            black_long = false;
                        }
                    }
                }
            }
        }
    }

    if (color == 0 && white_short) potential_moves.push_back(aBoard[48]);
    if (color == 0 && white_long) potential_moves.push_back(aBoard[16]);
    if (color == 1 && black_short) potential_moves.push_back(aBoard[55]);
    if (color == 1 && black_long) potential_moves.push_back(aBoard[23]);

    for (unsigned long int idx = 0; idx < potential_moves.size(); idx++)
    {
        if (potential_moves[idx].index == destination) return true;
    }
    return false;
}

bool board::queen_move(int piece_index, int destination, square *aBoard)
{
    int color = aBoard[piece_index].occupant->color;
    std::vector<square> potential_moves;

    orthog_down(potential_moves, piece_index, color, aBoard);
    orthog_up(potential_moves, piece_index, color, aBoard);
    orthog_left(potential_moves, piece_index, color, aBoard);
    orthog_right(potential_moves, piece_index, color, aBoard);

    diag_down_left(potential_moves, piece_index, color, aBoard);
    diag_down_right(potential_moves, piece_index, color, aBoard);
    diag_up_left(potential_moves, piece_index, color, aBoard);
    diag_up_right(potential_moves, piece_index, color, aBoard);

    for (unsigned long int idx = 0; idx < potential_moves.size(); idx++)
    {
        if (potential_moves[idx].index == destination) return true;
    }

    return false;
}

bool board::rook_move(int piece_index, int destination, square *aBoard)
{
    int color = aBoard[piece_index].occupant->color;
    std::vector<square> potential_moves;

    orthog_down(potential_moves, piece_index, color, aBoard);
    orthog_up(potential_moves, piece_index, color, aBoard);
    orthog_right(potential_moves, piece_index, color, aBoard);
    orthog_left(potential_moves, piece_index, color, aBoard);

    for (unsigned long int idx = 0; idx < potential_moves.size(); idx++)
    {
        if (potential_moves[idx].index == destination) return true;
    }

    return false;
}

bool board::knight_move(int piece_index, int destination, square *aBoard)
{
    int color = aBoard[piece_index].occupant->color;
    std::vector<square> potential_moves;

    knight_jump(potential_moves, piece_index, color, aBoard);

    for (unsigned long int idx = 0; idx < potential_moves.size(); idx++)
    {
        if (potential_moves[idx].index == destination) return true;
    }

    return false;
}

bool board::bishop_move(int piece_index, int destination, square *aBoard)
{
    int color = aBoard[piece_index].occupant->color;
    std::vector<square> potential_moves;

    diag_down_left(potential_moves, piece_index, color, aBoard);
    diag_down_right(potential_moves, piece_index, color, aBoard);
    diag_up_right(potential_moves, piece_index, color, aBoard);
    diag_up_left(potential_moves, piece_index, color, aBoard);

    for (unsigned long int idx = 0; idx < potential_moves.size(); idx++)
    {
        if (potential_moves[idx].index == destination) return true;
    }

    return false;
}

bool board::check_for_check(int piece_index, int destination, square *aBoard)
{
    square *copy = copy_board(aBoard);
    int color = copy[piece_index].occupant->color;
    std::vector<square> white;
    std::vector<square> black;
    std::string king_square;

    move(copy[piece_index].occupant, &copy[destination], copy);
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
            if (black[idx].name == king_square)
            {
                for (auto idx = 0; idx < 64; idx++)
                {
                    if (copy[idx].occupant) delete copy[idx].occupant;

                }
                delete[] copy;
                return true;
            }
        }
    }
    else if (color == 1)
    {
        for (long unsigned int idx = 0; idx < white.size(); idx++)
        {
            if (white[idx].name == king_square)
            {
                for (auto idx = 0; idx < 64; idx++)
                {
                    if (copy[idx].occupant) delete copy[idx].occupant;
                }
                delete[] copy;
                return true;
            }
        }
    }
    
    for (auto idx = 0; idx < 64; idx++)
    {
        if (copy[idx].occupant) delete copy[idx].occupant;
    }
    delete[] copy;
    return false;
}

bool board::is_move_legal(int piece_index, int destination, square *aBoard)
{
    if (aBoard[piece_index].occupant == NULL) return false;
    if (aBoard[piece_index].occupant->color != aBoard[64].whose_turn) return false;

    switch(aBoard[piece_index].occupant->type)
    {
        case 'R':
            if (!rook_move(piece_index, destination, aBoard)) return false;
            break;
        case 'N':
            if (!knight_move(piece_index, destination, aBoard)) return false;;
            break;
        case 'B':
            if (!bishop_move(piece_index, destination, aBoard)) return false;
            break;
        case 'P':
            if (!pawn_move(piece_index, destination, aBoard)) return false;
            break;
        case 'Q':
            if (!queen_move(piece_index, destination, aBoard)) return false;
            break;
        case 'K':
            if (!king_move(piece_index, destination, aBoard)) return false;
            break;
    }
    if (check_for_check(piece_index, destination, aBoard)) return false;

    return true;
}

int board::turn(square *aBoard, std::string new_move)
{
    std::string from;
    std::string to;
    int from_index;
    int to_index;

    if (new_move.size() < 5) return 1;

    from += new_move[0];
    from += new_move[1];

    to += new_move[3];
    to += new_move[4];

    bool to_found = false;
    bool from_found = false;

    for (auto idx = 0; idx < 64; idx++)
    {
        if (to == aBoard[idx].name)
        {
            to_found = true;
            to_index = idx;
        }
        if (from == aBoard[idx].name) 
        {
            from_found = true;
            from_index = idx;
        }
    }

    if (!to_found || !from_found) return 1;
    if (aBoard[from_index].occupant == NULL) return 1;
    if (aBoard[from_index].occupant->color != aBoard[64].whose_turn) return 1;
    if (aBoard[to_index].occupant)
    {
        if (aBoard[to_index].occupant->color == aBoard[64].whose_turn) return 1;
    }
    if (!is_move_legal(from_index, to_index, aBoard)) return 1;

    move(aBoard[from_index].occupant, &aBoard[to_index], aBoard);

    update_attacked_squares(white_attacked_squares, black_attacked_squares, aBoard);
    int king_square;
    bool check = false;
    for (auto idx = 0; idx < 64; idx++)
    {
        if (aBoard[idx].occupant)
        {
            if (aBoard[idx].occupant->color != aBoard[to_index].occupant->color)
            {
                if (aBoard[idx].occupant->type == 'K') king_square = idx;
            }
        }
    }
    if (aBoard[to_index].occupant->color == 0)
    {
        for (unsigned long int idx = 0; idx < white_attacked_squares.size(); idx++)
        {
            if (white_attacked_squares[idx].index == king_square) check = true;
        }
    }

    if (aBoard[to_index].occupant->color == 1)
    {
        for (unsigned long int idx = 0; idx < black_attacked_squares.size(); idx++)
        {
            if (black_attacked_squares[idx].index == king_square) check = true;
        }
    }

    if (check)
    {
        if (aBoard[to_index].occupant->color == 0)
        {
            if (check_for_mate(aBoard, 1)) return 3;
        }

        if (aBoard[to_index].occupant->color == 1)
        {
            if (check_for_mate(aBoard, 0)) return 3;
        }
        
        return 2;
    }
    else if (!check)
    {
        if (aBoard[to_index].occupant->color == 0)
        {
            if (check_for_mate(aBoard, 1)) return 4;
        }

        if (aBoard[to_index].occupant->color == 1)
        {
            if (check_for_mate(aBoard, 0)) return 4;
        }
    }

    return 0;
}

bool board::check_for_mate(square *aBoard, int color)
{
    std::vector<square> potential_moves;

    for (auto idx = 0; idx < 64; idx++)
    {
        if (aBoard[idx].occupant)
        {
            if (aBoard[idx].occupant->color == color)
            {
                switch(aBoard[idx].occupant->type)
                {
                    case 'R':
                        rook(potential_moves, idx, aBoard);
                        for (unsigned long int jdx = 0; jdx < potential_moves.size(); jdx++)
                        {
                            if (!check_for_check(idx, potential_moves[jdx].index, aBoard))
                            {
                                return false;
                            }
                        }
                        potential_moves.clear();
                        break;
                    case 'N':
                        knight_jump(potential_moves, idx, color, aBoard);
                        for (unsigned long int jdx = 0; jdx < potential_moves.size(); jdx++)
                        {
                            if (!check_for_check(idx, potential_moves[jdx].index, aBoard))
                            {
                                return false;
                            }
                        }
                        potential_moves.clear();
                        break;
                    case 'B':
                        bishop(potential_moves, idx, aBoard);
                        for (unsigned long int jdx = 0; jdx < potential_moves.size(); jdx++)
                        {
                            if (!check_for_check(idx, potential_moves[jdx].index, aBoard))
                            {
                                return false;
                            }
                        }
                        potential_moves.clear();
                        break;
                    case 'P':
                        pawn(potential_moves, idx, aBoard);
                        for (unsigned long int jdx = 0; jdx < potential_moves.size(); jdx++)
                        {
                            if (!check_for_check(idx, potential_moves[jdx].index, aBoard))
                            {
                                return false;
                            }
                        }
                        potential_moves.clear();
                        break;
                    case 'Q':
                        queen(potential_moves, idx, aBoard);
                        for (unsigned long int jdx = 0; jdx < potential_moves.size(); jdx++)
                        {
                            if (!check_for_check(idx, potential_moves[jdx].index, aBoard))
                            {
                                return false;
                            }
                        }
                        potential_moves.clear();
                        break;
                    case 'K':
                        king_attack(potential_moves, idx, aBoard[idx].occupant->color, aBoard);  
                        for (unsigned long int jdx = 0; jdx < potential_moves.size(); jdx++)
                        {
                            if (!check_for_check(idx, potential_moves[jdx].index, aBoard))
                            {
                                return false;
                            }
                        }
                        potential_moves.clear();                     
                        break;
                }
            }
        }
    }
    return true;
}

void board::pawn(std::vector<square> &data, int index, square *aBoard)
{
    int color = aBoard[index].occupant->color;
    
    if (color == 0)
    {
        if (index > 7 && index % 8 != 7)
        {
            if (aBoard[index - 7].occupant)
                if (aBoard[index - 7].occupant->color != color) data.push_back(aBoard[index - 7]);
        }
        if (index < 56 && index % 8 != 7)
        {
            if (aBoard[index + 9].occupant)
                if (aBoard[index + 9].occupant->color != color) data.push_back(aBoard[index + 9]);
        }
    }
    else if (color == 1)
    {
        if (index > 7 && index % 8 != 0)
        {
            if (aBoard[index - 9].occupant)
                if (aBoard[index - 9].occupant->color != color) data.push_back(aBoard[index - 9]);
        }
        if (index < 56 && index % 8 != 0)
        {
            if (aBoard[index + 7].occupant)
                if (aBoard[index + 7].occupant->color != color) data.push_back(aBoard[index + 7]);
        }
    }


    if (color == 0)
    {
        if (index % 8 != 7)
        {
            if (aBoard[index + 1].occupant == NULL) data.push_back(aBoard[index + 1]);
        }
        if (aBoard[index].occupant->move_count == 0)
        {
            if (aBoard[index + 1].occupant == NULL && aBoard[index + 2].occupant == NULL)
            {
                data.push_back(aBoard[index + 2]);
            }
        }
        if (index % 8 == 4)
        {
            if (index > 7)
            {
                if (aBoard[index - 8].occupant)
                {
                    if (aBoard[index - 8].occupant->type == 'P' && aBoard[index - 8].occupant->move_count == 1
                    && aBoard[index - 8].occupant->color == 1)
                    {
                        if (aBoard[index - 8].occupant->en_passant == true)
                        {
                            data.push_back(aBoard[index - 7]);
                        }
                    }
                }
            }
            if (index < 56)
            {
                if (aBoard[index + 8].occupant)
                {
                    if (aBoard[index + 8].occupant->type == 'P' && aBoard[index + 8].occupant->move_count == 1
                    && aBoard[index + 8].occupant->color == 1)
                    {
                        if (aBoard[index + 8].occupant->en_passant == true)
                        {
                            data.push_back(aBoard[index + 9]);
                        }
                    }
                }
            }
        }
    }

    if (color == 1)
    {
        if (index % 8 != 0)
        {
            if (aBoard[index - 1].occupant == NULL) data.push_back(aBoard[index - 1]);
        }
        if (aBoard[index].occupant->move_count == 0)
        {
            if (aBoard[index - 1].occupant == NULL && aBoard[index - 2].occupant == NULL)
            {
                data.push_back(aBoard[index - 2]);
            }
        }
        if (index % 8 == 3)
        {
            if (index > 7)
            {
                if (aBoard[index - 8].occupant)
                {
                    if (aBoard[index - 8].occupant->type == 'P' && aBoard[index - 8].occupant->move_count == 1
                    && aBoard[index - 8].occupant->color == 0)
                    {
                        if (aBoard[index - 8].occupant->en_passant == true)
                        {
                            data.push_back(aBoard[index - 9]);
                        }
                    }
                }
            }
            if (index < 56)
            {
                if (aBoard[index + 8].occupant)
                {
                    if (aBoard[index + 8].occupant->type == 'P' && aBoard[index + 8].occupant->move_count == 1
                    && aBoard[index + 8].occupant->color == 0)
                    {
                        if (aBoard[index + 8].occupant->en_passant == true)
                        {
                            data.push_back(aBoard[index + 7]);
                        }
                    }
                }
            }
        }
    }
}

void board::queen(std::vector<square> &data, int index, square *aBoard)
{
    int color = aBoard[index].occupant->color;

    orthog_up(data, index, color, aBoard);
    orthog_down(data, index, color, aBoard);
    orthog_left(data, index, color, aBoard);
    orthog_right(data, index, color, aBoard);
    diag_down_left(data, index, color, aBoard);
    diag_down_right(data, index, color, aBoard);
    diag_up_left(data, index, color, aBoard);
    diag_up_right(data, index, color, aBoard);
}

void board::rook(std::vector<square> &data, int index, square *aBoard)
{
    int color = aBoard[index].occupant->color;

    orthog_up(data, index, color, aBoard);
    orthog_down(data, index, color, aBoard);
    orthog_left(data, index, color, aBoard);
    orthog_right(data, index, color, aBoard);
}

void board::bishop(std::vector<square> &data, int index, square *aBoard)
{
    int color = aBoard[index].occupant->color;

    diag_down_left(data, index, color, aBoard);
    diag_down_right(data, index, color, aBoard);
    diag_up_left(data, index, color, aBoard);
    diag_up_right(data, index, color, aBoard);
}

char board::promote()
{
    char type;
    std::string response;
    std::cout << "Please enter promotion piece e.g. 'Q', 'R', 'B', 'N', : ";
    getline(std::cin, response);
    while (true)
    {
        while (response.size() !=  1)
        {
            std::cout << "Please enter promotion piece e.g. 'Q', 'R', 'B', 'N', : ";
            getline(std::cin, response);
        }
        type = response[0];
        if (type == 113 || type == 114 || type == 98 || type == 110) type -= 32;
        if (type == 'Q' || type == 'R' || type == 'B' || type == 'N') return type;
    }
}

void board::printBoard()
{
    for (auto idx = 0; idx < 64; idx++)
    {
        std::cout << squares[idx].name << " : ";
        if (squares[idx].occupant)
        {
            if (squares[idx].occupant->color == 0) std::cout << "White ";
            if (squares[idx].occupant->color == 1) std::cout << "Black ";
            std::cout << squares[idx].occupant->type;
        }
        std::cout << std::endl;
    }
}