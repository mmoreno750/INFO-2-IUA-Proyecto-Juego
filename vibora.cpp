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
<<<<<<< HEAD
    frente.sig= nullptr;
    fondo.sig = &frente;
    fondo.posicionX=285;
=======
    frente.sig=NULL;
    fondo.sig = &frente;
    fondo.posicionX=310;
>>>>>>> 5a09a944a3f97748bb8452110d07513aba75977e
    fondo.posicionY=240;
    tVibora.loadFromFile("IMAGENES/SNAKE.png");
    sVibora.setTexture(tVibora);


}

void vibora::dibujar(RenderWindow* pantalla) {
<<<<<<< HEAD
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
=======

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

>>>>>>> 5a09a944a3f97748bb8452110d07513aba75977e
            break;
    }

    fondo.posicionX = aux.posicionX;
    fondo.posicionY = aux.posicionY;
}

void vibora::crecer(RenderWindow *pantalla) {

}


