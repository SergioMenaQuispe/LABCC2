#include <cstdlib>
#include<iostream>
#include<time.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&lista, int n)
{
    Nodo *nuevo_nodo = new Nodo(); 
    nuevo_nodo -> dato = n; 

    Nodo *aux1 = lista; 
    Nodo *aux2;

    while((aux1 != NULL)&&(aux1 -> dato < n))
    {
        aux2 = aux1;
        aux1 = aux1 -> siguiente;
    }

    if(lista == aux1)
        lista = nuevo_nodo;
    else
        aux2 -> siguiente = nuevo_nodo;
    
    nuevo_nodo -> siguiente = aux1;

    cout<<n<<" insertado a la lista \n";
}

void eliminarLista(Nodo *&lista, int &n)
{
    Nodo *aux = lista;
    n = aux->dato;
    lista = aux->siguiente;
    delete aux;
}

void mostrarLista(Nodo *lista)
{
    Nodo *actual = new Nodo();
    actual = lista;

    while (actual != NULL)
    {
        cout<< actual->dato <<" -> ";
        actual = actual->siguiente;
    }
    cout<<endl;

}


int main(){

    Nodo *lista = NULL;

    srand(time(NULL));

    int num;
    for(int i = 0; i < 1000; i++){
        num = 1 + rand() % 10;
        insertarLista(lista, num);
    }

    int n;
    mostrarLista(lista);

    while (lista != NULL)
        eliminarLista(lista,n);

    return 0;
}