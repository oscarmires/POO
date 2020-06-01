//
//  Persona.cpp
//  herencia
//
//  Created by Oscar Miranda Escalante on 25/05/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#include "Persona.hpp"
#include <sstream>
#include <iostream>

Persona::Persona() {
    this->nombre = "nombre";
    this->direccion = "direccion";
    this->ciudad = "ciudad";
    this->estado = "estado";
    this->cp = "00000";
}

Persona::Persona(string nombre, string direccion, string ciudad, string estado, string cp) {
    this->nombre = nombre;
    this->direccion = direccion;
    this->ciudad = ciudad;
    this->estado = estado;
    this->cp = cp;
}

string Persona::getNombre() {
    return this->nombre;
}

string Persona::getDireccion() {
    return this->direccion;
}

string Persona::getCiudad(){
    return this->ciudad;
}

string Persona::getEstado() {
    return this->estado;
}

string Persona::getCP() {
    return this->cp;
}

string Persona::toString() {
    stringstream ss;
    ss << "Nombre: " << this->nombre << "\n";
    ss << "Direccion: " << this->direccion << "\n";
    ss << "Ciudad: " << this->ciudad << "\n";
    ss << "Estado: " << this->estado << "\n";
    ss << "CP: " << this->cp << "\n";
    string toString;
    toString = ss.str();
    return toString;
}

