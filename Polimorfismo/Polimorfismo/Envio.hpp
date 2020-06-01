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
    int id;
    Persona remitente, destinatario;
public:
    Envio();
    Envio(Persona, Persona);
    virtual double calculaCosto() const {
        return 0;
    };
    void setID(int);
    int getID();
    Persona getRemitente();
    Persona getDestinatario();
};

#endif /* Envi_o_hpp */
