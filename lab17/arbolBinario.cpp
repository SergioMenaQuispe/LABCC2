#include <iostream>
using namespace std;

template<class T>
struct Nodo
{
    T nro;
    struct Nodo *izq, *der, *sig;
};

template<class T>
Nodo<T> *crearNodo(T x)
{
    Nodo<T> *nuevoNodo = new Nodo<T>();

    nuevoNodo->nro = x;
    nuevoNodo->izq = NULL;
    nuevoNodo->der = NULL;
    nuevoNodo->sig = NULL;

    return nuevoNodo;
}

template<class T>
void insertar(Nodo<T> *&arbol, T x)
{
    if(arbol==NULL)
        arbol = crearNodo(x);

    else if(x < arbol->nro)
        insertar(arbol->izq, x);

    else if(x > arbol->nro)
        insertar(arbol->der, x);
}

template<class T>
void mostrarArbol(Nodo<T> *arbol, int count)
{
    if(arbol == NULL)
        return;
    else
    {
        mostrarArbol(arbol->der,count+1);
        for(int i = 0; i < count; i++)
            cout<<"   ";
        cout<<arbol->nro<<endl;
        mostrarArbol(arbol->izq,count+1);
    }
}

int main(){

    

    return 0;
}