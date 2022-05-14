#include<iostream>
#include <string>
#include <typeinfo>
using namespace std;

struct Nodo{
    void *dato;
    const char *tipo;
    Nodo *siguiente;
};


void insertarLista(Nodo *&lista, void * n, const char * tipo)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo -> dato = n; 
    nuevo_nodo->tipo = tipo;

    Nodo *aux1 = lista; 
    Nodo *aux2;

    while((aux1 != NULL))
    {
        aux2 = aux1;
        aux1 = aux1 -> siguiente;
    }

    if(lista == aux1)
        lista = nuevo_nodo;
    else
        aux2 -> siguiente = nuevo_nodo;
    
    nuevo_nodo -> siguiente = aux1;

    cout<<nuevo_nodo->tipo <<" insertado a la lista \n";
}


string cast(void *dato, const char *tipo){
    int i; float f; double d; char c; bool b; string s = "";

    if(typeid(i).name() == tipo)         
        return to_string(*(int*)dato);
    else if(typeid(f).name() == tipo)
        return to_string(*(float*)dato);
    else if(typeid(d).name() == tipo)
        return to_string(*(double*)dato);
    else if(typeid(c).name() == tipo)
        return s += (*(char*)dato);
    else if(typeid(b).name() == tipo){
        if (*(bool*)dato) return "true";
        else return "false";
    }
    else if(typeid(s).name() == tipo)
        return (*(string*)dato);
    else
        return NULL;
}

void mostrarLista(Nodo *lista)
{
    Nodo *actual = new Nodo();
    actual = lista;

    while (actual != NULL)
    {
        cout<<cast(actual->dato,actual->tipo)<<" -> ";
        actual = actual->siguiente;
    }
    cout<<endl;

}

void eliminarLista(Nodo *&lista, void *n)
{
    Nodo *aux = lista;
    n = aux->dato;
    lista = aux->siguiente;
    delete aux;
}


int main(){

    Nodo *lista = NULL;

    int n = 1;
    void *v = &n;
    insertarLista(lista, v,typeid(n).name());

    char a = 'a';
    v = &a;
    insertarLista(lista, v,typeid(a).name());

    bool c = true;
    v = &c;
    insertarLista(lista, v,typeid(c).name());

    string d = "hola";
    v = &d;
    insertarLista(lista, v,typeid(d).name());

    double h = 1.34245;
    v = &h;
    insertarLista(lista, v,typeid(h).name());

    float g = 1.3;
    v = &g;
    insertarLista(lista, v,typeid(g).name());
    
    mostrarLista(lista);

    while (lista != NULL) {
        eliminarLista(lista,v);
    }

    return 0;
    
}