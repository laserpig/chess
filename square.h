#pragma once

class piece;
#include <string>
#include "pieces.h"

class square
{
    public:
    std::string name;
    piece *occupant;
};