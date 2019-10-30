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






    while (pantalla.isOpen()) {
        Event e;
        while (pantalla.pollEvent(e)) {
            if (e.type == Event::Closed)
                pantalla.close();
        }

        jugador.constructor(&pantalla);

        /*if (Keyboard::isKeyPressed(Keyboard::A)){
            jugador.moverse(&pantalla, 0);
        }
        if (Keyboard::isKeyPressed(Keyboard::D)){
            jugador.moverse(&pantalla, 1);
        }
        if (Keyboard::isKeyPressed(Keyboard::S)){
            jugador.moverse(&pantalla, 2);
        }
        if (Keyboard::isKeyPressed(Keyboard::W)){
            jugador.moverse(&pantalla, 0);
        }*/

        pantalla.clear();

        pantalla.draw(sFondoDePantalla);
        pantalla.display();
        //pantalla.clear();



    }
    




    system("pause");

    return 0;
}