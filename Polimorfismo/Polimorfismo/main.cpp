//
//  main.cpp
//  herencia
//
//  Created by Oscar Miranda Escalante on 25/05/20.
//  Copyright © 2020 Oscar Miranda Escalante. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Paquete.hpp"
#include "Sobre.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    vector<Envio*> envios;
    double costoTotal = 0;
    Persona r, d;
    for (int i = 0; i < 10; ++i) {
        Paquete e(r, d);
        e.setID(i);
        puts("-----------------------------");
        printf("ID del envío: %d\n", e.getID());
        puts("Datos del remitente: ");
        cout << e.getRemitente().toString() << endl;
        puts("Datos del destinatario: ");
        cout << e.getDestinatario().toString() << endl;
        printf("****** Costo del envío: %.2f\n\n", e.calculaCosto());
        costoTotal += e.calculaCosto();
    }
    printf("Costo total: %0.2f\n", costoTotal);
}
