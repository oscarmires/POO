//
//  MatFraccion.cpp
//  POO2
//
//  Oscar Miranda Escalante on 14/05/20.
//

#include "MatFraccion.hpp"
#include "Fraccion.hpp"
#include <fstream>
#include <sstream>
#include <vector>
#include <string>


MatFraccion::MatFraccion() {
    vector<int> numeradores,
                denominadores;
    this->matriz.push_back(numeradores);
    this->matriz.push_back(denominadores);
}

MatFraccion::MatFraccion(string path) {
    this->llenaConArchivo(path);
}

Fraccion MatFraccion::getFraccion(int n) {
    if (n >= this->size()) {
        puts("Número de elemento no válido.");
        Fraccion error;
        return error;
    }
    Fraccion newFraccion;
    newFraccion.setNumerador(this->matriz[0][n]);
    newFraccion.setDenominador(this->matriz[1][n]);
    return newFraccion;
}

void MatFraccion::appendFraccion(Fraccion frac) {
    this->matriz[0].push_back(frac.getNumerador());
    this->matriz[1].push_back(frac.getDenominador());
}

void MatFraccion::llenaConArchivo(string path){
    // leer archivo
    ifstream csvMatriz;
    csvMatriz.open(path);
    if (csvMatriz.fail()) {
        puts("No se pudo abrir el archivo.");
        exit(1);
    }
    string numeradores;
    string denominadores;
    getline(csvMatriz, numeradores);
    getline(csvMatriz, denominadores);
    csvMatriz.close();
    
    // convertir valores separados por comas a vectores
    vector<int> vNumeradores;
    string token;
    auto it = numeradores.begin();
    while (it != numeradores.end()) {
        if (*it == ',') {
            vNumeradores.push_back(stoi(token));
            token = "";
        } else {
            token += *it;
        }
        ++it;
        if (it == numeradores.end()) {
            vNumeradores.push_back(stoi(token));
            token = "";
        }
    }
    vector<int> vDenominadores;
    it = denominadores.begin();
    while (it != denominadores.end()) {
        if (*it == ',') {
            vDenominadores.push_back(stoi(token));
            token = "";
        } else {
            token += *it;
        }
        ++it;
        if (it == denominadores.end()) {
            vDenominadores.push_back(stoi(token));
            token = "";
        }
    }
    
    // Insertar datos obtenidos en atributo "matriz";
    this->matriz.push_back(vNumeradores);
    this->matriz.push_back(vDenominadores);
}

MatFraccion MatFraccion::mas(MatFraccion matrizB) {
    if (this->size() != matrizB.size()) {
        puts("No es posible sumar dos matrices de diferente tamaño");
        MatFraccion error;
        return error;
    }
    MatFraccion sumaMat;
    for (int i = 0; i < this->size(); ++i) {
        Fraccion fracA = this->getFraccion(i);
        Fraccion fracB = matrizB.getFraccion(i);
        Fraccion sumaFraccion = fracA.mas(fracB);
        sumaMat.appendFraccion(sumaFraccion);
    }
    return sumaMat;
}

unsigned long MatFraccion::size() {
    return this->matriz[0].size();
}

void MatFraccion::exportar(string nombre) {
    ofstream nuevoCSV(nombre);
    auto it = this->matriz[0].begin();
    while (it != this->matriz[0].end()-1) {
        nuevoCSV << *it << ',';
        ++it;
    }
    nuevoCSV << *it << endl; // insertar último elemento sin coma y salto de línea
    
    it = this->matriz[1].begin();
    while (it != this->matriz[1].end()-1) {
        nuevoCSV << *it << ',';
        ++it;
    }
    nuevoCSV << *it;
    nuevoCSV.close();
}

void MatFraccion::print() {
    for (int i = 0; i < 2; ++i) {
        for (auto n : this->matriz[i]) {
            cout << n << " ";
        }
        cout << endl;
    }
}
