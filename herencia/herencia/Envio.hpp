//
//  Envío.hpp
//  herencia
//
//  Created by Oscar Miranda Escalante on 25/05/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#ifndef Envio_hpp
#define Envio_hpp

#include "Persona.hpp"

class Envio {
private:
    Persona remitente, destinatario;
public:
    Envio(Persona, Persona);
    virtual double calculaCosto() {
        return 0;
    };
};

#endif /* Envi_o_hpp */
