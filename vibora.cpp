//
// Created by mauri on 26/10/2019.
//
#include <SFML/Graphics.hpp>
#include "vibora.h"
using namespace sf;

void vibora::constructor(RenderWindow *pantalla ) {
    frente = new movimiento;
    frente->posicionX=240;
    frente->posicionY=320;
    frente->sig=NULL;
    fondo = new movimiento;
    fondo = frente;
    tVibora.loadFromFile("IMAGENES/SNAKE.png");
    sVibora.setTexture(tVibora);
    sVibora.setOrigin(frente->posicionX, frente->posicionY);
    pantalla->draw(sVibora);
   // dibujar(pantalla, frente);
}

void vibora::dibujar(RenderWindow* pantalla, movimiento *aux) {

    /*}else{
        do{
            sVibora.setOrigin(aux->posicionX, aux->posicionY);
            pantalla->draw(sVibora);
            aux=aux->sig;
        }while (aux->sig!=NULL);
    }*/


}

/*void vibora::moverse(RenderWindow *pantalla, int direc) {
    movimiento *aux = new movimiento;
    int x, y, x2, y2;
    aux = frente;
    frente = new movimiento;

    switch (direc){
        case 0://Derecha
        frente->posicionX= frente->posicionX + 10;
        sVibora.setOrigin(frente->posicionX, frente->posicionY);
        pantalla->draw(sVibora);
        while(aux->sig!=NULL){
            x = aux->posicionX;
            y = aux->posicionY;
            aux = aux->sig;
            aux->posicionY=y;
            aux->posicionX=x;
            sVibora.setOrigin(aux->posicionX, aux->posicionY);
            pantalla->draw(sVibora);

        }


            delete aux;
            break;
    }


}*/