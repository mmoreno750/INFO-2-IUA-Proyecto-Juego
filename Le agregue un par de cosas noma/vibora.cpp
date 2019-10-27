//
// Created by mauri on 26/10/2019.
//

#include "vibora.h"

void vibora::constructor() {
    frente = new movimiento;
    frente->posicionx=300;
    frente->posicionY=200;
    fondo = new movimiento;
    fondo = frente;

}
