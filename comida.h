#ifndef COMIDA_H
#define COMIDA_H
#include <SFML/Graphics.hpp>
using namespace sf;
class comida {
private:
    int posicionX;
    int posicionY;
    bool comido; 
        
    Texture texturaComida;
    Sprite spriteComida;
        
public:
	comida();

    void dibujar(RenderWindow *w);
    
    //bool detectarColision(&sprite,int ,int);
    
    
};

#endif

