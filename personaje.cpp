#include "personaje.h"
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
personaje::personaje(int X, int Y ) {
    
    texturaPJ.loadFromFile("cabezavibora.png");
    spritePJ.setTexture(texturaPJ);
    spritePJ.setPosition(X, Y);
    
   
}



void personaje::dibujar (RenderWindow *w , int posicionActualX,int posicionActualY) {
  
   
    spritePJ.setPosition(posicionActualX,posicionActualY);
  
   w->draw(spritePJ);
    
   
    
    
}



personaje::~personaje() {
    
}




int personaje::aumentarPosicionX ( ) {
	if(velocidadX==1){
    posicionX+=5;
    }
    else{
    posicionX-=5;
    }
    return posicionX;
}

int personaje::aumentarPosicionY ( ) {
    posicionY+=5;
    return posicionY;
}

int personaje::decrecerPosicionX ( ) {
    posicionX-=5;
    return posicionX;
}

int personaje::decrecerPosicionY ( ) {
    posicionY-=5;
    return posicionY;
}

void personaje::mirarArriba ( ) {
    
    spritePJ.setOrigin(20,20);
    spritePJ.setRotation(-90);
}

void personaje::mirarAbajo ( ) {
    spritePJ.setOrigin(20,20);
    spritePJ.setRotation(90);
}

void personaje::mirarDerecha ( ) {
    spritePJ.setOrigin(20,20);
    spritePJ.setRotation(0);
}

void personaje::mirarIzquierda ( ) {
    
    
    
    
    spritePJ.setOrigin(20,20);
    spritePJ.setRotation(180);
}

bool personaje::detectarColisiones () {
    if(posicionX<17+20 || posicionX>621-20 || posicionY<64+20 || posicionY>461-20){
   return true;
    }
    else{
        return false;
    }
}
    
