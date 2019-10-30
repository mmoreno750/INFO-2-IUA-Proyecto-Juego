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
    fondo = frente;
    fondo = frente;
    tVibora.loadFromFile("IMAGENES/SNAKE.png");
    sVibora.setTexture(tVibora);
    dibujar(pantalla);

}

void vibora::dibujar(RenderWindow* pantalla) {

    movimiento aux1 = frente;


        if (aux1.sig==NULL) {
            sVibora.setPosition(aux1.posicionX, aux1.posicionY);     //Esto seria la cola. No
            pantalla->draw(sVibora);                                 //se si hay un error, pero medio q no anda.
                                                                     //No dibuja bien.
        }
        while (aux1.sig!=NULL){
            sVibora.setPosition(aux1.posicionX, aux1.posicionY);
            pantalla->draw(sVibora);
            aux1 = *aux1.sig;
            sleep(milliseconds(1000));
        }


}

void vibora::moverse(RenderWindow *pantalla, int direccion) {
    movimiento aux = fondo;
    frente = *frente.sig;
    fondo = *fondo.sig;
    frente.sig=NULL;

    
    switch (direccion){
        case 1:
            frente.posicionX=frente.posicionX+10; //Derecha
            break;
        case 0:
            frente.posicionX=frente.posicionX-10;  //Izquierda
            break;
        case 3:
            frente.posicionY=frente.posicionY-10; //ABAJO
            break;
        case 2:
            frente.posicionY=frente.posicionY+10; //ARRIBA
            break;
    }
}