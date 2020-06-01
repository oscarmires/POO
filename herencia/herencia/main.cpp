//
//  main.cpp
//  herencia
//
//  Created by Oscar Miranda Escalante on 25/05/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#include <iostream>
#include "Paquete.hpp"
#include "Sobre.hpp"

int main(int argc, const char * argv[]) {
    Persona* r = new Persona("Nombre", "Dirección", "Ciudad", "Estado", 00000);
    Persona* d = new Persona("Nombre", "Dirección", "Ciudad", "Estado", 00000);
    Sobre* s = new Sobre(*r, *d, 10, 10, 100., 100.);
    Paquete* p = new Paquete(*r, *d, 10, 10, 10, 50, 50.);
    using std::cout;
    cout << s->calculaCosto() << "\n";
    cout << p->calculaCosto() << "\n";
}
