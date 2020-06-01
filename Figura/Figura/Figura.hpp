//
//  Figura.hpp
//  POO2
//

#ifndef Figura_hpp
#define Figura_hpp

#include <cstdio>
#include <cmath>

class Figura {
private:
    int x, y;
public:
    Figura();
    Figura(int, int);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    virtual int getArea() = 0;
};

#endif /* Figura_hpp */
