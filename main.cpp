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
    jugador.constructor(&pantalla);






    while (pantalla.isOpen()) {
        Event e;
        while (pantalla.pollEvent(e)) {
            if (e.type == Event::Closed)
                pantalla.close();
        }


        if (Keyboard::isKeyPressed(Keyboard::D) && direccion!=1){
            direccion = 0;


        }
        if (Keyboard::isKeyPressed(Keyboard::A) && direccion!=0){
            direccion = 1;

        }
        if (Keyboard::isKeyPressed(Keyboard::W) && direccion!=2){
            direccion = 2;

        }
        if (Keyboard::isKeyPressed(Keyboard::S) && direccion!=3){
            direccion = 3;

        }
        if (Keyboard::isKeyPressed(Keyboard::Space)){

        }
        std::cout<<direccion<<std::endl;
        jugador.moverse(direccion);
        pantalla.draw(sFondoDePantalla);
        jugador.dibujar(&pantalla);
        pantalla.display();
        pantalla.clear();




    }
    




    system("pause");

    return 0;
}