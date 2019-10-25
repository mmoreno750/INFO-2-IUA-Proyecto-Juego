#include "comida.h"
#include <ctime>
#include <stdlib.h>
#include <SFML/Graphics.hpp>

using namespace sf;
comida::comida() {
    posicionX=200;
    posicionY=200;
    
    texturaComida.loadFromFile("pelotita.gif");
    spriteComida.setTexture(texturaComida);
    
}



void comida::dibujar (RenderWindow * w) {
    spriteComida.setPosition(posicionX,posicionY);
    w->draw(spriteComida);
  
}


void comida::obtenerCajaComida( ) {
    //_cajaComida=spriteComida.getGlobalBounds();
  //  RectangleShape cajaComida(_cajaComida);// Es una clase(contiene la funcion intersect)
//    if cajaComida.getGlobalBounds()
}


//void comida::desaparecer (int posicionViboraX, int posicionViboraY, FloatRect cajaVibora) {
  //  if(cajaComida.intersects ())
//}




//numero = rand() % 100 + 1;//hasta+desde

/*bool comida::detectarColision (&sprite _spritePj1,int posicionPj1X,int posicionPj1Y) {
	
}*/


