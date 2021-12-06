#pragma once

#include <iostream>
#include <string>
#include "board.h"

class piece
{
public:
    class pawn
    {
        public:
            int value;
            bool color;
            square *location;
    };
    class rook
    {
        public:
            int value;
            bool color;
            square *location;
    };
    class knight
    {
        public:
            int value;
            bool color;
            square *location;
    };
    class bishop
    {
        public:
            int value;
            bool color;
            square *location;
    };
    class queen
    {
        public:
            int value;
            bool color;
            square *location;
    };
    class king
    {
        public:
            int value;
            bool color;
            square *location;
    };
    bool is_move_legal(piece type, square from, square to);
};