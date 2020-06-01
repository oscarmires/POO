//
//  Dice.cpp
//  Oscar Miranda Escalante A01630791
//

#include "Dice.hpp"
#include <chrono>
#include <cstdlib>
using namespace std;

Dice::Dice() {
    this->max = 6;
}

int Dice::roll() {
    srand((unsigned int) std::chrono::system_clock::now().time_since_epoch().count()); // para obtener más rápido los valores aleatorios que usando clock
    return rand() % this->max + 1;
}
