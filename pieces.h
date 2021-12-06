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
            std::string name = "Pawn";
            int value;
            bool color;
            square *location;
    };
    class rook
    {
        public:
            std::string name = "Rook";
            int value;
            bool color;
            square *location;
    };
    class knight
    {
        public:
            std::string name = "Knight";
            int value;
            bool color;
            square *location;
    };
    class bishop
    {
        public:
            std::string name = "Bishop";
            int value;
            bool color;
            square *location;
    };
    class queen
    {
        public:
            std::string name = "Queen";
            int value;
            bool color;
            square *location;
    };
    class king
    {
        public:
            std::string name = "King";
            int value;
            bool color;
            square *location;
    };
    bool is_move_legal(piece type, square from, square to);
};