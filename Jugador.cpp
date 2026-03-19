#include "Jugador.h"

Jugador::Jugador(char ficha_){
    
    ficha = ficha_;
    
};

void Jugador::ponerFicha(Tablero* T, int fila, int columna){
    
    //T->core[fila-1][columna-1] = ficha;
    T->ponerFicha(fila, columna, ficha);
    
};

