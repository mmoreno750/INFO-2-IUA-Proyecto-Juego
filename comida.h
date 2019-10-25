#ifndef COMIDA_H
#define COMIDA_H
#include <SFML/Graphics.hpp>
using namespace sf;
class comida {
private:
    int posicionX;
    int posicionY;
    
    
    
    
    Texture texturaComida;
    Sprite spriteComida;
        
public:
	comida();

    void dibujar(RenderWindow *w);
    
    void obtenerCajaComida();
   
    void desaparecer();
    
};

#endif

