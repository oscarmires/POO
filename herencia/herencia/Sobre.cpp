//
//  Sobre.cpp
//  herencia
//
//  Created by Oscar Miranda Escalante on 25/05/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#include "Sobre.hpp"

Sobre::Sobre(Persona r, Persona d, int ancho, int alto, double costo, double cargoAdicional) : Envio(r, d) {
    this->ancho = ancho;
    this->alto = alto;
    this->costo = costo;
    this->cargoAdicional = cargoAdicional;
}

double Sobre::calculaCosto() {
    if ((ancho > 35 && alto > 25) || (ancho > 25 && alto > 35)) {
        return this->costo + this->cargoAdicional;
    } else {
        return this->costo;
    }
}
