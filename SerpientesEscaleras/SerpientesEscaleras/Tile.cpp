//
//  Tile.cpp
//  Oscar Miranda Escalante A01630791
//

#include "Tile.hpp"
#include <cstdio>

Tile::Tile() {
    this->type = 'N';
    this->id = 0;
    this->move = 0;
}

void Tile::setID(int id) {
    this->id = id;
}

int Tile::getID() {
    return this->id;
}

int Tile::getMove() {
    return this->move;
}

char Tile::getType() {
    return this->type;
}
