#include <iostream>
#include "vibora.h"
#include <SFML/Graphics.hpp>
using namespace sf;
int main() {
    RenderWindow pantalla(VideoMode(640,480), "ProyectoSnake");
    pantalla.setFramerateLimit(30);

    Texture tFondoDePantalla;
    Sprite sFondoDePantalla;
    tFondoDePantalla.loadFromFile("IMAGENES/fondodepantalla.png");
    sFondoDePantalla.setTexture(tFondoDePantalla);
    vibora jugador;
    int direccion=1; // 1 derecha - 2 arriba - 3 abajo - 0 izquierda






    while (pantalla.isOpen()) {
        Event e;
        while (pantalla.pollEvent(e)) {
            if (e.type == Event::Closed)
                pantalla.close();
        }

        jugador.constructor(&pantalla);

        if (Keyboard::isKeyPressed(Keyboard::A) && direccion!=1){
            direccion=0;
        }
        if (Keyboard::isKeyPressed(Keyboard::D) && direccion!=0){
            direccion=1;
        }
        if (Keyboard::isKeyPressed(Keyboard::S) && direccion!=2){
            direccion=3;
        }
        if (Keyboard::isKeyPressed(Keyboard::W) && direccion!=3){
         direccion=2;
        }
        std::cout<<direccion<<std::endl;
        pantalla.clear();
        jugador.moverse(&pantalla,direccion);
        pantalla.draw(sFondoDePantalla);
        jugador.dibujar(&pantalla);
        pantalla.display();
        //pantalla.clear();



    }
    




    system("pause");

    return 0;
}