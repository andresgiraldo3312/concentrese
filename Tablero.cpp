
#include "Tablero.h"



Tablero::Tablero(char x){
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            core[i][j] = x;
        }
    }
};


void Tablero::Mostrar(){
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "|" << core[i][j] << "|" ;
        }
        cout << endl;
        cout << "=========";
        cout << endl;
    }
    
    cout << endl;
};


void Tablero::ponerFicha(int f, int c, char ficha){
    
    if(core[f-1][c-1] == '-'){
        
        core[f-1][c-1] = ficha;
        
    }else{
        
        cout << "posicion no disponible" << endl;
        
    }
};