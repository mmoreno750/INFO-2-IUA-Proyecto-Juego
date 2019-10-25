#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <SFML/Graphics.hpp>
using namespace sf;

class personaje {

private:
    int posicionX;
    int posicionY;
    
    Texture texturaPJ;
    Sprite spritePJ;
    
    Texture texturaCuerpo;
    Sprite spriteCuerpo;
    
    
    
public:
    
    int velocidadX=1;
    int velocidadY=0;
    
    personaje(int , int);
    void construirCuerpo();
    
    void dibujar(RenderWindow *w ,int , int);
    void dibujarCola(RenderWindow *w, int ,int);
    
    int x();
    int y();
    
    
    int aumentarPosicionX();
    int aumentarPosicionY();
    int decrecerPosicionX();
    int decrecerPosicionY();
    
    void resetearPJ1XY(int , int);
    
    void mirarAbajo();
    void mirarArriba();
    void mirarDerecha();
    void mirarIzquierda();
    
    
    
    bool detectarColisiones();
    
    
};
#endif

