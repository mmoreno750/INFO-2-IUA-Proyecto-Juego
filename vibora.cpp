//
// Created by mauri on 26/10/2019.
//
#include <SFML/Graphics.hpp>
#include "vibora.h"
using namespace sf;

void vibora::constructor(RenderWindow *pantalla ) {
    frente.posicionX=320;
    frente.posicionY=240;
    frente.sig=NULL;
    fondo.sig = &frente;
    fondo.posicionX=310;
    fondo.posicionY=240;
    tVibora.loadFromFile("IMAGENES/SNAKE.png");
    sVibora.setTexture(tVibora);
    dibujar(pantalla);

}

void vibora::dibujar(RenderWindow* pantalla) {

    movimiento *aux1 = &fondo;

    do{
        sVibora.setPosition(aux1->posicionX, aux1->posicionY);
        pantalla->draw(sVibora);
        aux1 = aux1->sig;
    }while (aux1->sig!=NULL);

    if (aux1->sig==NULL) {
        sVibora.setPosition(aux1->posicionX, aux1->posicionY);     //Esto seria la cola. No
        pantalla->draw(sVibora);                                 //se si hay un error, pero medio q no anda.
        }




}

void vibora::moverse( int direccion) {
    movimiento *aux = new movimiento;
    aux = &frente;
    frente.sig = new movimiento;
    frente = *frente.sig;
    frente.posicionX=aux->posicionX;
    frente.posicionY=aux->posicionY;

    switch (direccion){
        case 0:
            frente.posicionX=frente.posicionX+10;

            break;
        case 1:
            frente.posicionX=frente.posicionX-10;

            break;
        case 2:
            frente.posicionY=frente.posicionY-10;

            break;
        case 3:
            frente.posicionY=frente.posicionY+10;

            break;
    }

    fondo.posicionX = aux.posicionX;
    fondo.posicionY = aux.posicionY;
}

void vibora::crecer(RenderWindow *pantalla) {

}


