#include "personaje.h"
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
personaje::personaje(int X, int Y ) {
    
    texturaPJ.loadFromFile("cabezavibora.png");
    spritePJ.setTexture(texturaPJ);
    spritePJ.setPosition(X, Y);
    
   
}


void personaje::dibujarCola (RenderWindow * w, int , int ) {
    if (velocidadX==1){
    spriteCuerpo.setPosition(posicionX-6,posicionY);
    w->draw(spriteCuerpo);
    }
    if(velocidadX==-1){
    spriteCuerpo.setPosition(posicionX+6,posicionY);
    w->draw(spriteCuerpo);
    }
    if(velocidadY==1){
    spriteCuerpo.setPosition(posicionX,posicionY-6);
    w->draw(spriteCuerpo);
}
    if(velocidadY==-1){
        spriteCuerpo.setPosition(posicionX,posicionY+6);
        w->draw(spriteCuerpo);
    }
    
}

void personaje::dibujar(RenderWindow * w , int posicionActualX,int posicionActualY) {
    spritePJ.setPosition(posicionActualX,posicionActualY);
   w->draw(spritePJ);
}

int personaje::aumentarPosicionX ( ) {
	if(velocidadX==1){
    posicionX+=6;
    }
    else{
    posicionX-=6;
    }
    return posicionX;
}

int personaje::aumentarPosicionY ( ) {
    posicionY+=6;
    return posicionY;
}

int personaje::decrecerPosicionX ( ) {
    posicionX-=6;
    return posicionX;
}

int personaje::decrecerPosicionY ( ) {
    posicionY-=6;
    return posicionY;
}

void personaje::mirarArriba ( ) {
    
    spritePJ.setOrigin(6 , 6);
    spritePJ.setRotation(-90);
}

void personaje::mirarAbajo ( ) {
    spritePJ.setOrigin(6 , 6);
    spritePJ.setRotation(90);
}

void personaje::mirarDerecha ( ) {
    spritePJ.setOrigin(6 , 6);
    spritePJ.setRotation(0);
}

void personaje::mirarIzquierda ( ) {
    spritePJ.setOrigin(6 , 6);
    spritePJ.setRotation(180);
    
}

bool personaje::detectarColisiones () {
    if(posicionX<17+5 || posicionX>621-5 || posicionY<64+5 || posicionY>461-5){
   return true;
    }
    else{
        return false;
    }
}
    

int personaje::x ( ) {
	return posicionX;
}

int personaje::y ( ) {
	return posicionY;
}

void personaje::resetearPJ1XY (int _posicionX, int _posicionY) {
	posicionX=_posicionX;
    posicionY=_posicionY;
    spritePJ.setRotation(0);
    velocidadX=1;
    velocidadY=0;
}



void personaje::construirCuerpo ( ) {
    texturaCuerpo.loadFromFile("cuerpovibora.png");
    spriteCuerpo.setPosition(posicionX-6, posicionY );
    
}

