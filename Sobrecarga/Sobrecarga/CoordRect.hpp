#ifndef Coordr
#define COORDRECT_HPP
#include <iostream>
#include "CoordPolar.hpp"
using std::ostream;

class CoordRect {
friend ostream &operator << (ostream& salida, const CoordRect);
public:
    CoordRect();
    CoordRect(double, double);
    double getX() const;
    double getY() const;
    void setX(double);
    void setY(double);
    CoordRect operator + (const CoordRect&);
    CoordRect operator - (const CoordRect&);
    CoordRect operator + (const CoordPolar&);
    CoordRect operator - (const CoordPolar&);
private:
    double x;
    double y;
};


#endif // COORDRECT_H
