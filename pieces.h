#pragma once

#include <iostream>
#include <string>
#include "board.h"

class piece
{
public:
    class pawn
    {
        int value;
        bool color;
    };
    class rook
    {
        int value;
        bool color;
    };
    class knight
    {
        int value;
        bool color;
    };
    class bishop
    {
        int value;
        bool color;
    };
    class queen
    {
        int value;
        bool color;
    };
    class king
    {
        int value;
        bool color;
    };
    bool is_move_legal(piece type, square from, square to);
};