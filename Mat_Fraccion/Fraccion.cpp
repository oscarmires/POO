//
//  Fraccion.cpp
//  POO2
//
//  Oscar Miranda Escalante on 13/05/20.
//

#include "Fraccion.hpp"
#include <cstdio>

using namespace std;

Fraccion::Fraccion() {
    this->numerador = 0;
    this->denominador = 1;
}

Fraccion::Fraccion(int numerador, int denominador) {
    if (denominador == 0) {
        puts("No se puede dividir entre cero");
        return;
    }
    // Reducir
    int factor_comun = mcd(numerador, denominador);
    this->numerador = numerador / factor_comun;
    this->denominador = denominador / factor_comun;
    // Corregir signos
    if (denominador < 0 || (numerador && denominador < 0)) {
        this->numerador *= -1;
        this->denominador *= -1;
    }
}

int Fraccion::mcd(int a, int b) {
    // Encontrar máximo común divisor con el algoritmo de Euclides
    if (b == 0) {
        return a;
    }
    int r = a % b;
    return mcd(b, r);
}

Fraccion Fraccion::mas(Fraccion frac) {
    int denominador_comun = this->getDenominador() * frac.getDenominador();
    int numerador_suma = frac.getNumerador()*this->getDenominador() + this->getNumerador()*frac.getDenominador();
    Fraccion suma(numerador_suma, denominador_comun);
    return suma;
}

Fraccion Fraccion::por(Fraccion frac) {
    int producto_numerador = this->getNumerador() * frac.getNumerador();
    int producto_denominador = this->getDenominador() * frac.getDenominador();
    Fraccion producto(producto_numerador, producto_denominador);
    return producto;
}

int Fraccion::getNumerador() {
    return this->numerador;
}

int Fraccion::getDenominador() {
    return this->denominador;
}

void Fraccion::setNumerador(int n) {
    this->numerador = n;
}

void Fraccion::setDenominador(int d) {
    this->denominador = d;
}

void Fraccion::print() {
    printf("%d/%d\n", this->numerador, this->denominador);
}
