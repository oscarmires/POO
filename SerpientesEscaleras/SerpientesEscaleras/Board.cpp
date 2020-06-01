//
//  Board.cpp
//  Oscar Miranda Escalante A01630791
//

#include "Board.hpp"
#include <random>
#include <algorithm>
#include <chrono>
#include <iostream>

Board::Board() {
    for (int i = 0; i < 21; ++i) {
        Tile tile(Tile::Type::N);
        this->tiles.push_back(tile);
    }
    for (int i = 0; i < 3; ++i) {
        Tile tile(Tile::Type::S);
        this->tiles.push_back(tile);
    }
    for (int i = 0; i < 3; ++i) {
        Tile tile(Tile::Type::L);
        this->tiles.push_back(tile);
    }
    for (int i = 0; i < 3; ++i) {
        Tile tile(Tile::Type::N);
        this->tiles.push_back(tile);
    }
    
    unsigned int seed = (unsigned int) std::chrono::system_clock::now().time_since_epoch().count(); // generar semilla
    std::shuffle(this->tiles.begin()+3, this->tiles.end()-3, std::default_random_engine(seed)); // revolver tiles (utiliza begin()+3 para que las primeras 3 siempre sean tipo N...)
    
    int i = 1;
    for (Tile &tile : this->tiles) {
        tile.setID(i);
        ++i;
    }
}

unsigned long int Board::size() {
    return this->tiles.size();
}

Tile Board::getTile(int pos) {
    return this->tiles[pos];
}

void Board::print() {
    std::cout << "Board: ";
    for (Tile t : this->tiles) {
        switch (t.getType()) {
            case Tile::Type::S:
                std::cout << "S ";
                break;
            case Tile::Type::L:
                std::cout << "L ";
                break;
            case Tile::Type::N:
                std::cout << "N ";
                break;
        }
    }
    std::cout << std::endl;
}
