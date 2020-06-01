//
//  Envío.cpp
//  herencia
//
//  Created by Oscar Miranda Escalante on 25/05/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#include "Envio.hpp"

Envio::Envio()
: remitente(), destinatario() {}

Envio::Envio(Persona r, Persona d) : remitente(r), destinatario(d) {}

void Envio::setID(int id) {
    this->id = id;
}

int Envio::getID() {
    return this->id;
}

Persona Envio::getRemitente() {
    return this->remitente;
}

Persona Envio::getDestinatario() {
    return this->destinatario;
}

