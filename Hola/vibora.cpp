//
// Created by mauri on 26/10/2019.
//
#include <SFML/Graphics.hpp>
#include "vibora.h"
using namespace sf;

void vibora::constructor(RenderWindow *pantalla ) {
    frente = new movimiento;
    frente->posicionX=320;
    frente->posicionY=240;
    frente->sig=NULL;
    fondo = frente;
    fondo = frente;
    tVibora.loadFromFile("IMAGENES/SNAKE.png");
    sVibora.setTexture(tVibora);
    dibujar(pantalla, frente, fondo);

}

void vibora::dibujar(RenderWindow* pantalla, movimiento *frente, movimiento *fondo) {

    movimiento *aux = fondo, *aux2=fondo;


        while (aux->sig!=NULL){
            sVibora.setPosition(aux->posicionX, aux->posicionY);
            pantalla->draw(sVibora);
            aux=aux->sig;
            sleep(milliseconds(2000));
        }
        if (aux->sig==NULL) {
            sVibora.setPosition(aux->posicionX, aux->posicionY);     //Esto seria la cola. No
            pantalla->draw(sVibora);                                 //se si hay un error, pero medio q no anda.
            frente = aux;                                            //No dibuja bien.

        }

        delete aux;
        delete aux2;


}

void vibora::moverse(RenderWindow *pantalla, int direc) {
    movimiento *aux = fondo;
    frente->sig= new movimiento;
    frente=frente->sig;
    fondo= fondo->sig;
    frente->sig=NULL;
    delete aux;

    switch (direc){
        case 0:
            frente->posicionX=frente->posicionX+10; //Pa la derecha
            dibujar(pantalla, frente, fondo);
            break;
        case 1:
            frente->posicionX=frente->posicionX-10;  //Izquierda
            dibujar(pantalla, frente, fondo);
            break;
        case 2:
            frente->posicionY=frente->posicionY-10; //ABAJO
            dibujar(pantalla, frente, fondo);
            break;
        case 3:
            frente->posicionY=frente->posicionY+10;
            dibujar(pantalla, frente, fondo);          //ARRIBA
            break;


    }


}