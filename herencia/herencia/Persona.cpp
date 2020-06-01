//
//  Persona.cpp
//  herencia
//
//  Created by Oscar Miranda Escalante on 25/05/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#include "Persona.hpp"


Persona::Persona(string nombre, string direccion, string ciudad, string estado, unsigned int cp) {
    this->nombre = nombre;
    this->direccion = direccion;
    this->ciudad = ciudad;
    this->estado = estado;
    this->cp = cp;
}
