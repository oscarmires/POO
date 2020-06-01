//
//  Circulo.cpp
//  POO2
//

#include "Circulo.hpp"

Circulo::Circulo() : Figura::Figura() {}

Circulo::Circulo(int x, int y, int r) : Figura(x, y) {
    this->r = r;
}

int Circulo::getR() {
    return this->r;
}

void Circulo::setR(int r) {
    this->r = r;
}

