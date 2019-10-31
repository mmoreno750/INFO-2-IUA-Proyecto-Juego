//
// Created by mauri on 26/10/2019.
//
#include <SFML/Graphics.hpp>
#include <iostream>
#include "vibora.h"
using namespace sf;

void vibora::constructor(RenderWindow *pantalla ) {
    frente.posicionX=350;
    frente.posicionY=240;
    frente.sig= nullptr;
    fondo.sig = &frente;
    fondo.posicionX=285;
    fondo.posicionY=240;
    tVibora.loadFromFile("IMAGENES/SNAKE.png");
    sVibora.setTexture(tVibora);


}

void vibora::dibujar(RenderWindow* pantalla) {
    movimiento aux1 = fondo;

    do {
        sVibora.setPosition(aux1.posicionX, aux1.posicionY);
        pantalla->draw(sVibora);
        aux1 = *aux1.sig;
    }  while (aux1.sig!=NULL);
        sVibora.setPosition(frente.posicionX,frente.posicionY);
    pantalla->draw(sVibora);
    sleep(milliseconds(300));
}

void vibora::moverse(RenderWindow *pantalla, int direccion) {
movimiento *aux=&fondo;
 do{
        aux->posicionX=aux->sig->posicionX;
        aux->posicionY=aux->sig->posicionY;
        aux=aux->sig;
    }while(aux->sig!= nullptr);


    //fondo.posicionX=frente.posicionX;
    //fondo.posicionY=frente.posicionY;
    switch (direccion){
        case 1:
            frente.posicionX=frente.posicionX+25; //Derecha
            break;
        case 0:
            frente.posicionX=frente.posicionX-25;  //Izquierda
            break;
        case 3:
            frente.posicionY=frente.posicionY+25; //ABAJO
            break;
        case 2:
            frente.posicionY=frente.posicionY-25; //ARRIBA
            break;
    }
}