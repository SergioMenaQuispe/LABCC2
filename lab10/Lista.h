#include"Nodo.h"

class Lista{
    private:
        Nodo *lista;
    public:
        Lista(){}

        Lista(int dato){
            lista = new Nodo(dato);
        }

        ~Lista(){
            Nodo *aux;
            while(lista != NULL){
                aux = lista;
                lista = lista->getSig();
                delete aux;
            }
            cout<<"Lista eliminada..."<<endl;
        }

        void pushBack(int dato){
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

        void pushForward(int dato){
            if(lista == NULL)
                lista = new Nodo(dato);
            else{
                Nodo *nuevo = new Nodo(dato);
                nuevo->setSiguiente(lista);
                lista = nuevo;
            }
        }

        void pushAt(int dato, int index){
            if(index >= 0 && index <= this->length()){
                if(index == 0){
                    this->pushForward(dato);
                    return;
                }

                if(index == length()){
                    this->pushBack(dato);
                    return;
                }
                
                Nodo *nuevo = new Nodo(dato);
                Nodo *actual = lista;
                Nodo *anterior;

                int count = 0;
                while(count != index){
                    count++;
                    anterior = actual;
                    actual = actual->getSig();
                }

                anterior->setSiguiente(nuevo);
                nuevo->setSiguiente(actual);

            }else{
                return;
            }
        }

        void popBack(){
            Nodo *actual = lista;
            Nodo *anterior;
            while(actual->getSig() != NULL){
                anterior = actual;
                actual = actual->getSig();
            }
            
            anterior->setSiguiente(NULL);
            delete actual;
        }

        void popForward(){
            Nodo *actual = lista;
            lista = lista->getSig();
            delete actual;
        }

        void popAt(int index){
            if(index >= 0 && index < this->length()){
                if(index == 0){
                    this->popForward();
                    return;
                }
                if(index == length() - 1){
                    this->popBack();
                    return;
                }

                Nodo *actual = lista;
                Nodo *anterior;

                int count = 0;
                while(count != index){
                    count++;
                    anterior = actual;
                    actual = actual->getSig();
                }

                anterior->setSiguiente(actual->getSig());
                delete actual;

            }else{
                return;
            }
        }


        Nodo * at(int index){
            if(index >= 0 && index < this->length()){
                Nodo * actual = lista;
                int count = 0;
                while(count != index){
                    count++;
                    actual = actual->getSig();
                }
                return actual;
            }else{
                return NULL;
            }
        }

        int datoAt(int index){
            return at(index)->getDato();
        }

        Nodo *previousAt(int index){
            if(index >= 0 && index < this->length()){
                Nodo * anterior = NULL;
                Nodo * actual = lista;
                int count = 0;
                while(count != index){
                    count++;
                    anterior = actual;
                    actual = actual->getSig();
                }
                return anterior;
            }else{
                return NULL;
            }
        }
        
        void swap(int x, int y){
            Nodo *nodoX = at(x);
            Nodo *nodoY = at(y);
            int aux = nodoX->getDato();

            nodoX->setDato(nodoY->getDato());
            nodoY->setDato(aux);
        }

        int length(){
            int count = 0;
            Nodo *actual = lista;
            while (actual != NULL){
                count++;
                actual = actual->getSig();
            }
            return count;
        }

        void display(){
            Nodo *actual = lista;
            while (actual != NULL){
                cout<<actual->getDato()<<" -> ";
                actual = actual->getSig();
            }
            cout<<endl;
        }

};
