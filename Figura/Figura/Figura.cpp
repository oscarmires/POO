//
//  Figura.cpp
//  POO2
//

#include "Figura.hpp"

Figura::Figura() {}

Figura::Figura(int x, int y) {
    this-> x = x;
    this-> y = y;
}

int Figura::getX() {
    return this->x;
}

int Figura::getY() {
    return this->y;
}

void Figura::setX(int x) {
    this->x = x;
}

void Figura::setY(int y) {
    this->y = y;
}
