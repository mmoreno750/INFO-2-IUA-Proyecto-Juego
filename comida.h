#ifndef COMIDA_H
#define COMIDA_H

class comida {
private:
    int posicionX;
    int posicionY;
    
    Texture texturaComida;
    Sprite spriteComida;
        
public:
	comida();

    void dibujar(RenderWindow *w);
    
    
};

#endif

