#include<iostream>
using namespace std;

struct Persona{
    string nombre;
    string apellido;
    unsigned int edad;
    unsigned int DNI;
};

int main(){

    const int cantPersonas = 3;
    int edad;
    Persona array[cantPersonas];
    for(int i = 0; i < cantPersonas; i++){
        cout<<"\n\nPersona "<<i<<": "<<endl;;

        cout<<"Digite su nombre: ";
        cin>>array[i].nombre;
        cout<<"Digite su apellido: ";
        cin>>array[i].apellido;
        cout<<"Digite su edad: ";
        cin>>array[i].edad;
        cout<<"Digite su DNI: ";
        cin>>array[i].DNI;
    }  

    for(int i = 0; i < cantPersonas; i++){
        cout<<"Nombre: "<<array[i].nombre<<endl;
        cout<<"Apellido: "<<array[i].apellido<<endl;
        cout<<"Edad: "<<array[i].edad<<endl;
        cout<<"DNI: "<<array[i].DNI<<endl;
    }

    return 0;
}