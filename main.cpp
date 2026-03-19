
#include "Tablero.h"
#include "Jugador.h"

using namespace std;

int main(){
    
    ifstream archivoLectura("file.tri", ios::binary);
    
    Tablero OtroTablero('-');
    
    archivoLectura.read((char *)&OtroTablero,sizeof(Tablero));
    
    OtroTablero.Mostrar();

    return 0;
}
