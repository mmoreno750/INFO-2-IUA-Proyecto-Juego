#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <SFML/Graphics.hpp>
using namespace sf;

class personaje {

private:
    int posicionX=160;
    int posicionY=160;
    
    
    Texture texturaPJ;
    Sprite spritePJ;
    
public:
    
    int velocidadX=1;
    int velocidadY=0;
    
    personaje(int , int);
    
    void dibujar(RenderWindow *w ,int , int);
    
    int aumentarPosicionX();
    int aumentarPosicionY();
    int decrecerPosicionX();
    int decrecerPosicionY();
    int resetearPosicionXY();
    
    void mirarAbajo();
    void mirarArriba();
    void mirarDerecha();
    void mirarIzquierda();
    
    
    bool detectarColisiones();
    
    ~personaje();
    
};
#endif

