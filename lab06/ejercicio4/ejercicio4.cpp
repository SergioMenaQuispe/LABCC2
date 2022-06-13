#include"Arreglo.h"

int main(){

    Arreglo a;
    for(int i = 0 ; i < 7; i++)
        a.agregarDato(i);
    
    a.getDatos();
    for(int i = 0; i < 8; i++){
        a.retirarDato();
        a.getDatos();
    }

    a.agregarDato(50);
    a.getDatos();

    return 0;
}