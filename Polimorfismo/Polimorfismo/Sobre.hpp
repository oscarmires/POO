//
//  Sobre.hpp
//  herencia
//
//  Created by Oscar Miranda Escalante on 25/05/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#ifndef Sobre_hpp
#define Sobre_hpp

#include <stdio.h>
#include "Envio.hpp"

class Sobre : public Envio {
private:
    int ancho, alto;
    double costo, cargoAdicional = 0.;
public:
    Sobre(Persona, Persona, int, int, double, double);
    double calculaCosto() const override;
};

#endif /* Sobre_hpp */
