//
//  Player.cpp
//  Oscar Miranda Escalante A01630791
//

#include "Player.hpp"

Player::Player(int id) : id(id) {
    this->position = 1;
}

int Player::getPosition() {
    return this->position;
}

void Player::changePosition(int change) {
    this->position += change;
}

void Player::setPosition(int position) {
    this->position = position;
}

int Player::getID() {
    return this->id;
}
