//
//  Paquete.hpp
//  herencia
//
//  Created by Oscar Miranda Escalante on 25/05/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#ifndef Paquete_hpp
#define Paquete_hpp

#include "Envio.hpp"

class Paquete : public Envio {
private:
    int largo, ancho, alto, peso;
    double costoPorKilo;
public:
    Paquete(Persona, Persona, int, int, int, int, double);
    double calculaCosto() override;
};

#endif /* Paquete_hpp */
