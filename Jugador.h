

#ifndef JUGADOR_H
#define JUGADOR_H

#include "Tablero.h"

class Jugador{
    
    public:
        char ficha;
        Jugador(char ficha_);
        void ponerFicha(Tablero* T, int fila, int columna);
    
};


#endif