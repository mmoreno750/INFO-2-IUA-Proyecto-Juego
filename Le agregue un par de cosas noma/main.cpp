#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;
int main() {
    RenderWindow pantalla(VideoMode(640,420), "ProyectoSnake");
    pantalla.setFramerateLimit(30);


    while (pantalla.isOpen()) {
        Event e;
        while (pantalla.pollEvent(e)) {
            if (e.type == Event::Closed)
                pantalla.close();
        }

        pantalla.clear(Color(255,255,0,255));
    }
    

    std::cout << "Hello, Tinchox" << std::endl;
    system("pause");

    return 0;
}