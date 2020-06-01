//
//  Persona.hpp
//  herencia
//
//  Created by Oscar Miranda Escalante on 25/05/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#ifndef Persona_hpp
#define Persona_hpp

#include <string>
using namespace std;

class Persona {
private:
    string nombre, direccion, ciudad, estado, cp;
public:
    Persona();
    Persona(string, string, string, string, string);
    string getNombre();
    string getDireccion();
    string getCiudad();
    string getEstado();
    string getCP();
    string toString();
};

#endif /* Persona_hpp */
