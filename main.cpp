#include <SFML/Graphics.hpp>
#include <iostream>
#include "personaje.h"
using namespace sf;

int main(int argc, char *argv[]) {
    personaje PJ1(160,160);
    RenderWindow w(VideoMode(640, 480), "Viborita");
    int posicionActualX=160,posicionActualY=160;
    w.setFramerateLimit(30);
    int vidas = 3;
    
    bool colisionbordedepantalla=0;
    
    Texture texturaFondoDePantalla;
    Sprite spriteFondoDePantalla;
    
    texturaFondoDePantalla.loadFromFile("fondodepantalla.png");
    spriteFondoDePantalla.setTexture(texturaFondoDePantalla);
    

    while (w.isOpen()) {
        Event e;
        while (w.pollEvent(e)) {
            if (e.type == Event::Closed)
                w.close();
        }
            if (Keyboard::isKeyPressed(Keyboard::Right) && PJ1.velocidadX!=-1){
                PJ1.velocidadX=1;
                PJ1.velocidadY=0;
                PJ1.mirarDerecha();
            }
            
            
            if (Keyboard::isKeyPressed(Keyboard::Left) && PJ1.velocidadX!=1){
                PJ1.velocidadX=-1;
                PJ1.velocidadY=0;
                PJ1.mirarIzquierda();
            }
            
            if (Keyboard::isKeyPressed(Keyboard::Down) && PJ1.velocidadY!=-1){
                PJ1.velocidadX=0;
                PJ1.velocidadY=1;
                PJ1.mirarAbajo();
            }
            
            if (Keyboard::isKeyPressed(Keyboard::Up) && PJ1.velocidadY!=1){
                PJ1.velocidadX=0;
                PJ1.velocidadY=-1;
                PJ1.mirarArriba();
            }
        
        
        //dibujar
        w.clear(Color(255, 255, 255, 255));
        
        //---CONDICIONES PARA MOVERSE-------------------------------------------
            
            if(PJ1.velocidadX==1 && PJ1.velocidadY==0){
                posicionActualX=PJ1.aumentarPosicionX(); 
            }
            
            if(PJ1.velocidadX==-1 && PJ1.velocidadY==0){
                posicionActualX=PJ1.aumentarPosicionX(); 
            }
            
            if(PJ1.velocidadX==0 && PJ1.velocidadY==1){
                posicionActualY=PJ1.aumentarPosicionY(); 
            }
            
        
            if(PJ1.velocidadX==0 && PJ1.velocidadY==-1){
                posicionActualY=PJ1.decrecerPosicionY(); 
            }
        
        //----------------------------------------------------------------------
        
        w.draw(spriteFondoDePantalla);
        
        PJ1.dibujar( &w, posicionActualX , posicionActualY);
        
        w.display();
    
        colisionbordedepantalla=PJ1.detectarColisiones();
        if (colisionbordedepantalla==1){
            vidas = vidas - 1 ;
            
            
            
            if (vidas==0){
                return 0;
            }
        }
    }
    return 0;
}
