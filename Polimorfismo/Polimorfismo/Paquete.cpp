//
//  Paquete.cpp
//  herencia
//
//  Created by Oscar Miranda Escalante on 25/05/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#include "Paquete.hpp"

Paquete::Paquete(Persona r, Persona d) :
    Envio(r, d) {
    this->ancho = 1;
    this->alto = 1;
    this->largo = 1;
    this->peso = 1;
    this->costoPorKilo = 1;
}

Paquete::Paquete(Persona r, Persona d, int ancho, int largo, int alto, int peso, double costoPorKilo) :
    Envio(r, d) {
    this->ancho = ancho;
    this->alto = alto;
    this->largo = largo;
    this->peso = peso;
    this->costoPorKilo = costoPorKilo;
}

double Paquete::calculaCosto() const {
    return this->peso * this->costoPorKilo;
}
