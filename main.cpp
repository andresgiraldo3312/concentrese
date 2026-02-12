#include <iostream>

using namespace std;

class Carta{
    
    public:
        int ID; 
        bool Emparejado;
        bool Visible;
        
        Carta(int ID);
        void Mostrar();
        bool Comparar(Carta C_id);
        
};

Carta::Carta(int ID){
    
    this->ID = ID;
    Emparejado = false;
    Visible = false;
    
};

void Carta::Mostrar(){
    
    cout << "(-" << ID << "-)" << endl; 
    
};

bool Carta::Comparar(Carta C_id){
    
    return ID == C_id.ID;
    
};


int main(){
    
    Carta cartaUno(8);
    Carta cartaDos(8);
    
    cartaUno.Mostrar();
    cartaDos.Mostrar();
    
    cout << cartaUno.Comparar(cartaDos);

    return 0;
}

