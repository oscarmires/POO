//
//  Circulo.hpp
//  POO2
//

#ifndef Circulo_hpp
#define Circulo_hpp

#include <stdio.h>
#include "Figura.hpp"

class Circulo : public Figura {
private:
    int r;
public:
    Circulo();
    Circulo(int, int, int);
public:
    int getR();
    void setR(int r);
    int getArea();
};
#endif /* Circulo_hpp */
