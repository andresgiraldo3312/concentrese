#ifndef TABLERO_H
#define TABLERO_H

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class Tablero{
    
    private:
        char core[3][3];
        //int vidas;
    
    public:
        Tablero(char x);
        void Mostrar();
        void ponerFicha(int f, int c, char ficha);

};

#endif
