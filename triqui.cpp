 
#include <iostream>

using namespace std;

class Tablero{
    
    private:
        char core[3][3];
    
    public:
        Tablero(char x);
        void Mostrar();
        void ponerFicha(int f, int c, char ficha);

};

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

class Jugador{
    
    public:
        char ficha;
        Jugador(char ficha_);
        void ponerFicha(Tablero* T, int fila, int columna);
    
};

Jugador::Jugador(char ficha_){
    
    ficha = ficha_;
    
};

void Jugador::ponerFicha(Tablero* T, int fila, int columna){
    
    //T->core[fila-1][columna-1] = ficha;
    T->ponerFicha(fila, columna, ficha);
    
};


int main(){
    
    Tablero MiTablero('-');
    
    MiTablero.Mostrar();
    
    cout << endl;
    
    Jugador JugadorInicial('X');
    Jugador otroJugador('O');
    
    cout << sizeof(otroJugador)<< endl;
    
    JugadorInicial.ponerFicha(&MiTablero,1,1);
    
    MiTablero.Mostrar();
    
    otroJugador.ponerFicha(&MiTablero,1,2);
    
    MiTablero.Mostrar();

    return 0;
}
