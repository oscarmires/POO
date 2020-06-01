//
//  MatFraccion.hpp
//  POO2
//
//  Oscar Miranda Escalante on 14/05/20.
//

#ifndef MatFraccion_hpp
#define MatFraccion_hpp

#include <iostream>
#include <vector>
#include "Fraccion.hpp"
using namespace std;

class MatFraccion {
private:
    vector<vector<int>> matriz;
public:
    MatFraccion(); // matriz vacía
    MatFraccion(string path); //matriz desde archivo
    Fraccion getFraccion(int n);
    void appendFraccion(Fraccion frac);
    void llenaConArchivo(string path);
    MatFraccion mas(MatFraccion matrizB);
    unsigned long size(); // unsinged long porque la función size() de vector devuelve ese tipo de dato
    void exportar(string nombre); // guardar en csv
    void print(); // desplegar matriz
};

#endif /* MatFraccion_hpp */
