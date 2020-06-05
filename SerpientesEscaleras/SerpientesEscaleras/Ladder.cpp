//
//  Ladder.cpp
//  Oscar Miranda Escalante A01630791
//

#include "Ladder.hpp"

Ladder::Ladder(int reward) : Tile() {
    this->move = reward;
    this->type = 'L';
}
