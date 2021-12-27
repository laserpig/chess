#include "computer.h"
#include "square.h"
#include <iostream>

move computer::tree(std::string fen)
{
    square *aBoard = game.board_gen(fen);
    move add_move;
    int curr_best;
    long unsigned int best_index;
    std::vector<move> moves;
    std::vector<square> move_squares;

    for (auto idx = 0; idx < 64; idx++)
    {
        if (aBoard[idx].occupant)
        {
            if (aBoard[idx].occupant->color == color)
            {
                switch (aBoard[idx].occupant->type)
                {
                    case 'R':
                        game.rook(move_squares, idx, aBoard);
                        break;
                    case 'N':
                        game.knight_jump(move_squares, idx, color, aBoard);
                        break;
                    case 'B':
                        game.bishop(move_squares, idx, aBoard);
                        break;
                    case 'P':
                        game.pawn(move_squares, idx, aBoard);
                        break;
                    case 'Q':
                        game.queen(move_squares, idx, aBoard);
                        break;
                    case 'K':
                        game.king_attack(move_squares, idx, color, aBoard);
                        break;
                }
                for (long unsigned int jdx = 0; jdx < move_squares.size(); jdx++)
                {
                    if (game.check_for_check(idx, move_squares[jdx].index, aBoard))
                    {
                        move_squares.erase(move_squares.begin() + jdx);
                    }
                    else
                    {
                        add_move.from = idx;
                        add_move.to = move_squares[jdx].index;
                        moves.push_back(add_move);
                    }
                }
            }
        }
    }

    for (auto idx = 0; idx < 64; idx++)
    {
        if (aBoard[idx].occupant) delete aBoard[idx].occupant;
    }
    delete aBoard;

    std::vector<int> evaluations;
    for (unsigned long int idx = 0; idx < moves.size(); idx++)
    {
        evaluations.push_back(tree(fen, start_depth - 1, moves[idx]));
    }

    if (color == 0) curr_best = -2000;
    else if (color == 1) curr_best = 2000;

    for (unsigned long int idx = 0; idx < evaluations.size(); idx++)
    {
        if (evaluations[idx] > curr_best)
        {
            curr_best = evaluations[idx];
            best_index = idx;
        }
    }

    return moves[best_index];
}

int computer::tree(std::string fen, int depth, move aMove)
{ 
    square *aBoard = game.board_gen(fen);
    move add_move;
    int curr_best;
    int evaluation;
    long unsigned int best_index;
    std::vector<int> evaluations;
    std::vector<move> moves;
    std::vector<square> move_squares;
    int turn = depth % 2;

    game.move(aBoard[aMove.from].occupant, &aBoard[aMove.to], aBoard);

    if (depth == 0) 
    {
        evaluation = eval(aBoard);
        return evaluation;
    }

    for (auto idx = 0; idx < 64; idx++)
    {
        if (aBoard[idx].occupant)
        {
            if (aBoard[idx].occupant->color == turn)
            {
                switch (aBoard[idx].occupant->type)
                {
                    case 'R':
                        game.rook(move_squares, idx, aBoard);
                        break;
                    case 'N':
                        game.knight_jump(move_squares, idx, color, aBoard);
                        break;
                    case 'B':
                        game.bishop(move_squares, idx, aBoard);
                        break;
                    case 'P':
                        game.pawn(move_squares, idx, aBoard);
                        break;
                    case 'Q':
                        game.queen(move_squares, idx, aBoard);
                        break;
                    case 'K':
                        game.king_attack(move_squares, idx, color, aBoard);
                        break;
                }
                for (long unsigned int jdx = 0; jdx < move_squares.size(); jdx++)
                {
                    if (game.check_for_check(idx, move_squares[jdx].index, aBoard))
                    {
                        move_squares.erase(move_squares.begin() + jdx);
                    }
                    else
                    {
                        add_move.from = idx;
                        add_move.to = move_squares[jdx].index;
                        moves.push_back(add_move);
                    }
                }
            }
        }
    }

    if (turn == color && color == 0)
    {
        curr_best = - 2000;
        for (long unsigned int idx; idx < moves.size(); idx++)
        {
            evaluations.push_back(tree(fen, start_depth - 1, moves[idx]));
        }
    }
    else if (turn == color && color == 1)
    {
        curr_best = 2000;
        for (long unsigned int idx; idx < moves.size(); idx++)
        {
            evaluations.push_back(tree(fen, start_depth - 1, moves[idx]));
        }
    }
    else if (turn != color && color == 0)
    {
        curr_best = 2000;
        for (long unsigned int idx; idx < moves.size(); idx++)
        {
            evaluations.push_back(tree(fen, start_depth - 1, moves[idx]));
        }
    }
    else if (turn != color && color == 1)
    {
        curr_best = -2000;
        for (long unsigned int idx; idx < moves.size(); idx++)
        {
            evaluations.push_back(tree(fen, start_depth - 1, moves[idx]));
        }
    }

    for (auto idx = 0; idx < 64; idx++)
    {
        if (aBoard[idx].occupant) delete aBoard[idx].occupant;
    }
    delete[] aBoard;

    if (turn == color && color == 0)
    {
        curr_best = -2000;
        for (unsigned long int idx = 0; idx < evaluations.size(); idx++)
        {
            if (evaluations[idx] > curr_best)
            {
                curr_best = evaluations[idx];
                best_index = idx;
            }
        }
    }
    if (turn == color && color == 1)
    {
        curr_best = 2000;
        for (unsigned long int idx = 0; idx < evaluations.size(); idx++)
        {
            if (evaluations[idx] < curr_best)
            {
                curr_best = evaluations[idx];
                best_index = idx;
            }
        }
    }
    if (turn != color && color == 0)
    {
        curr_best = -2000;
        for (unsigned long int idx = 0; idx < evaluations.size(); idx++)
        {
            if (evaluations[idx] < curr_best)
            {
                curr_best = evaluations[idx];
                best_index = idx;
            }
        }
    }
    if (turn != color && color == 1)
    {
        curr_best = -2000;
        for (unsigned long int idx = 0; idx < evaluations.size(); idx++)
        {
            if (evaluations[idx] > curr_best)
            {
                curr_best = evaluations[idx];
                best_index = idx;
            }
        }
    }

    return curr_best;
}

int computer::eval(square *aBoard)
{
    int evaluation = 0;

    for (auto idx = 0; idx < 64; idx++)
    {
        if (aBoard[idx].occupant)
        { 
            evaluation += aBoard[idx].occupant->value;
        }
    }

    return evaluation;
}