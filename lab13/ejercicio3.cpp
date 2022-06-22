#include<iostream>
using namespace std;

struct jugador{
    string nombre;
    int edad;
    float talla;
};

typedef jugador Jugador;

void ingresarDatos(Jugador equipo[], int size){
    for(int i = 0; i < size; i++){
        cout<<"Digite nombre: "; cin>> equipo[i].nombre;
        cout<<"Digite edad: "; cin>> equipo[i].edad;
        cout<<"Digite talla: "; cin>> equipo[i].talla;
    }
}

ostream& operator<<(ostream &output, const Jugador j){
    cout<<"Nombre: "<<j.nombre<<". Edad: "<<j.edad<<"años. Talla: "<<j.talla<<"metros"<<endl;
    return output;
}   

void mostar(Jugador equipo[], int size){
    for(int i = 0; i < size; i++){
        if(equipo[i].edad < 20 && equipo[i].talla > 1.70){
            cout<<equipo[i];
        }
    }
}

int main(){

    int n = 10;
    Jugador equipo[n];

    ingresarDatos(equipo,n);
    mostar(equipo,n);

    return 0;
}