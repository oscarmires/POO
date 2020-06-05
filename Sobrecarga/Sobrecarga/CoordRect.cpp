#include "CoordRect.hpp"
#include <cmath>

ostream &operator <<(ostream& salida, const CoordRect coord) {
    salida << "(" << coord.x << "," << coord.y<< ")";
    return salida;
}
CoordRect::CoordRect() {
    x=0;
    y=0;
}
CoordRect::CoordRect(double xx, double yy) {
    x=xx;
    y=yy;
}
double CoordRect::getX() const {
    return x;
}
double CoordRect::getY() const {
    return y;
}
void CoordRect::setX(double xx) {
    x=xx;
}
void CoordRect::setY(double yy) {
    y=yy;
}
CoordRect CoordRect::operator + (const CoordRect& c) {
    CoordRect resultado(x+c.getX(), y+c.getY());
    return resultado;
}
CoordRect CoordRect::operator - (const CoordRect& c) {
    CoordRect resultado(x-c.getX(), y-c.getY());
    return resultado;
}
CoordRect CoordRect::operator + (const CoordPolar& p) {
    double xx = p.getR() * std::cos(p.getAngulo() * M_PI / 180);
    double yy = p.getR() * std::sin(p.getAngulo() * M_PI / 180);
    CoordRect resultado(x+xx, x+yy);
    return resultado;
}







/*CoordRect CoordRect::operator +(const CoordPolar& cp){
    double xx=cp.getR()*sin(cp.getAngulo()*M_PI/180);
    double yy=cp.getR()*cos(cp.getAngulo()*M_PI/180);
    CoordRect resultado(x + xx, y + yy);
    return resultado;
}*/
