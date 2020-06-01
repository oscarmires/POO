//
//  main.cpp
//  POO2
//
//  Oscar Miranda Escalante on 13/05/20.
//

#include "Fraccion.hpp"
#include "MatFraccion.hpp"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // suma de fracciones
    string nombre1,
           nombre2,
           nombre3;
    puts("Nombre de la matriz 1: "); //matriz_a.csv
    cin >> nombre1;
    puts("Nombre de la matriz 2: "); //matriz_b.csv
    cin >> nombre2;
    puts("Nombre de la matriz de resultado: ");
    cin >> nombre3;
    
    MatFraccion matA(nombre1);
    MatFraccion matB(nombre2);
    MatFraccion resultado = matA.mas(matB);
    
    matA.print();
    puts("\n+\n");
    matB.print();
    puts("\n=\n");
    resultado.print();
    resultado.exportar(nombre3);
    
    return 0;
}
