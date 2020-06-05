//
//  Board.cpp
//  Oscar Miranda Escalante A01630791
//

#include "Board.hpp"
#include <random>
#include <algorithm>
#include <chrono>
#include <iostream>

Board::Board(int tiles, int snakes, int ladders, int penalty, int reward) {
    for (int i = 0; i < tiles - snakes - ladders; ++i) {
        this->tiles.push_back(new Tile);
    }
    for (int i = 0; i < snakes; ++i) {
        this->tiles.push_back(new Snake(penalty));
    }
    for (int i = 0; i < ladders; ++i) {
        this->tiles.push_back(new Ladder(reward));
    }
    
    unsigned int seed = (unsigned int) std::chrono::system_clock::now().time_since_epoch().count(); // generar semilla
    std::shuffle(this->tiles.begin(), this->tiles.end(), std::default_random_engine(seed)); // revolver tiles
    
    int i = 1;
    for (auto &tile : this->tiles) {
        tile->setID(i);
        ++i;
    }
}

int Board::size() {
    return (int) this->tiles.size();
}

Tile Board::getTile(int pos) {
    if (pos < this->size()) {
        return *this->tiles[pos];
    } else {
        Tile tile;
        return tile;
    }
}

void Board::print() {
    std::cout << "Board: ";
    for (auto t : this->tiles) {
        std::cout << t->getType() << ' ';
    }
    std::cout << std::endl;
}
