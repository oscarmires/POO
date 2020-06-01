//
//  Tile.cpp
//  Oscar Miranda Escalante A01630791
//

#include "Tile.hpp"

Tile::Tile() {}

Tile::Tile(int type) {
    this->type = type;
}

void Tile::setID(int id) {
    this->id = id;
}

int Tile::getID() {
    return this->id;
}

int Tile::getType() {
    return this->type;
}
