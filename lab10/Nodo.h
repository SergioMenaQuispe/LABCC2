#include<iostream>
using namespace std;

class Nodo{
    private:
        int dato;
        Nodo *sig;
    public:
        Nodo(int dato){
            this->dato = dato;
        }

        ~Nodo(){
            cout<<"Nodo "<<dato<<" eliminado"<<endl;
        }

        int getDato(){return dato;}
        Nodo *&getSig(){return sig;}

        void setSiguiente(Nodo *sig){
            this->sig = sig;
        }

        void setDato(int dato){
            this->dato = dato;
        }

};