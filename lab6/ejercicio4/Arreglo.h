#include<iostream>
using namespace std;
class Arreglo{
    private:
        int datos[5],
            nuevoDato,
            cantDatos = 0;
    public:
        Arreglo(){}
        void agregarDato(int dato){
            this->nuevoDato = dato;
            if(this->cantDatos < 5){
                this->datos[cantDatos] = nuevoDato;
                cantDatos++;
            }else{
                cout<<"EL arreglo esta lleno"<<endl;
            }
        }
        void retirarDato(){
            if(this->cantDatos == 0){
                cout<<"El arreglo esta vacio"<<endl;
                return;
            }else{
                cantDatos--;
            }
        }
        void getDatos(){
            for(int i = 0; i < cantDatos; i++)
                cout<<datos[i]<<endl;
        }   
};