#ifndef COORDPOLAR_HPP
#define COORDPOLAR_HPP
#include <iostream>
using std::ostream;

class CoordPolar{
friend ostream &operator << (ostream& salida, const CoordPolar);
public:
    CoordPolar();
    CoordPolar(double, double);
    double getR() const;
    double getAngulo() const;
    void setR(double);
    void setAngulo(double);
private:
    double r;
    double angulo;
};


#endif // COORDPOLAR_H
