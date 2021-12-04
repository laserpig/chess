#pragma once

#include <iostream>
#include <string>
#include "board.h"

class piece
{
public:
    class pawn
    {
        int value = 1;
        bool color;
    };
    class rook
    {
        int value = 5;
        bool color;
    };
    class knight
    {
        int value = 3;
        bool color;
    };
    class bishop
    {
        int value = 3;
        bool color;
    };
    class queen
    {
        int value = 9;
        bool color;
    };
    class king
    {
        int value = 1000;
        bool color;
    };
    
};