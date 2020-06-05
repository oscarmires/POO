//
//  Snake.cpp
//  Oscar Miranda Escalante A01630791
//

#include "Snake.hpp"
#include <cstdlib>

Snake::Snake(int penalty) : Tile() {
    this->move = -1 * std::abs(penalty);
    this->type = 'S';
}
