#include "tile.h"

Tile::Tile()
{
    //ctor
}

Tile::~Tile()
{
    //dtor
}

Tile::Tile(const Tile& other)
{
    //copy ctor
}

Tile& Tile::operator=(const Tile& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
