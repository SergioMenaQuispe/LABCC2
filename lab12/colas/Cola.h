#include "Nodo.h"
#include<vector>

class Cola{
    private:
        Nodo *inicio;
        Nodo *fin;
    public:
        Cola(){
            inicio = NULL;
        }

        Cola(int dato){
            inicio = new Nodo(dato);
            fin = inicio;
        }

        ~Cola(){
            Nodo *aux;
            while(inicio != NULL){
                aux = inicio;
                inicio = inicio->getSig();
                delete aux;
            }
        }


        void push(int dato){
            if(inicio == NULL){
                inicio = new Nodo(dato);
                fin = inicio;
            }
            else{
                Nodo *nuevo = new Nodo(dato);
                Nodo *actual = fin;
                actual->setSiguiente(nuevo);
                fin = nuevo;
            }
        }

        void display(){
            Nodo *actual = inicio;
            
            while (actual != NULL){
                cout<<actual->getDato()<<" -> ";
                actual = actual->getSig();
            }
            cout<<endl;
        }

       int pop(){
            int dato = inicio->getDato();
            Nodo *actual = inicio;
            inicio = inicio->getSig();
            delete actual;
            return dato;
        }

        vector<int> find(int dato){
            vector<int> posiciones;
            Nodo *aux = inicio;
            int i = 0;
            while(aux != fin->getSig()){
                if(aux->getDato() == dato)
                    posiciones.push_back(i);
                aux = aux->getSig();
                i++;
            }

            if(posiciones.empty()){
                cout<<"El elemento "<<dato<<" no se encuentra en la pila"<<endl;
                return posiciones;
            }

            cout<<"El elemento "<<dato<<" se encuentra en las posicion: \t";
            for(int item : posiciones){
                cout<<item<<"\t";
            }
            cout<<endl;

            return posiciones;
        }

};