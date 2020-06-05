//
//  Player.cpp
//  Oscar Miranda Escalante A01630791
//

#include "Player.hpp"
using namespace std;

Player::Player(int id) {
    this->id = id;
    this->position = 1;
}

int Player::getPosition() {
    return this->position;
}

int Player::changePosition(int change) {
    this->position += change;
    if (this->position < 1) {
        this->position = 1;
    }
    return this->position;
}

void Player::setPosition(int position) {
    this->position = position;
}

int Player::getID() {
    return this->id;
}

void Player::setID(int id) {
    this->id = id;
}
