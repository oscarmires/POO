//
//  Fraccion.hpp
//  POO2
//
//  Oscar Miranda Escalante on 13/05/20.
//

#ifndef Fraccion_hpp
#define Fraccion_hpp

class Fraccion {
private:
    int numerador;
    int denominador;
    static int mcd(int a, int b);
public:
    Fraccion();
    Fraccion(int numerador, int denominador);
    Fraccion mas(Fraccion frac);
    Fraccion por(Fraccion frac);
    int getNumerador();
    int getDenominador();
    void setNumerador(int n);
    void setDenominador(int d);
    void print();
};

#endif /* Fraccion_hpp */
