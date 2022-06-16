#include<vector>
#include"Nodo.h"

class Pila{
    private:
        Nodo *lista;
    public:
        Pila(){}

        Pila(int dato){
            lista = new Nodo(dato);
        }

        ~Pila(){
            Nodo *aux;
            while(lista != NULL){
                aux = lista;
                lista = lista->getSig();
                delete aux;
            }
           // cout<<"Lista eliminada..."<<endl;
        }

        void push(int dato){
            if(lista == NULL)
                lista = new Nodo(dato);
            else{
                Nodo *nuevo = new Nodo(dato);
                Nodo *actual = lista;
                while (actual->getSig() != NULL){
                    actual = actual->getSig();
                }

                actual->setSiguiente(nuevo);
                
            }
        }

        int pop(){

            int last;
            Nodo *actual = lista;
            if(actual->getSig() == NULL){
                last = actual->getDato();
                lista = NULL;
                delete actual;
                return last;
            }

            Nodo *anterior;
            while(actual->getSig() != NULL){
                anterior = actual;
                actual = actual->getSig();
            }
            
            anterior->setSiguiente(NULL);
            last = actual->getDato();
            delete actual;

            return last;
        }

        vector<int> find(int dato){
            vector<int> posiciones;
            Nodo *aux = lista;
            int i = 0;
            while(aux != NULL){
                if(aux->getDato() == dato)
                    posiciones.push_back(i);
                aux = aux->getSig();
                i++;
            }

            if(posiciones.empty()){
                cout<<"El elemento "<<dato<<" no se encuentra en la pila";
                return posiciones;
            }

            cout<<"El elemento "<<dato<<" se encuentra en las posicion: \t";
            for(int item : posiciones){
                cout<<item<<"\t";
            }
            cout<<endl;

            return posiciones;
        }

        void display(){
            if(this->empty()){
                cout<<endl;
                return;
            }
            Nodo *actual = lista;
            while (actual != NULL){
                cout<<actual->getDato()<<" -> ";
                actual = actual->getSig();
            }
            cout<<endl;
        }

        bool empty(){
            return (lista == NULL);
        }

        int top(){
            if(lista == NULL)
                return -1; // la pila esta vacia
            
            Nodo *actual = lista;
            while (actual->getSig() != NULL){
                actual = actual->getSig();
            }

            return actual->getDato();    
        }

};