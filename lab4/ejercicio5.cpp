#include<iostream>
#include <string>
using namespace std;

struct Producto{
    string nombre;
    float precio;
    unsigned int stock;
};

void nuevoProducto(Producto productos[], int &index){
    cout<<"NOmbre del producto: ";
    cin>>productos[index].nombre;
    cout<<"Precio del producto: ";
    cin>>productos[index].precio;
    cout<<"Stock del Producto: ";
    cin>>productos[index].stock;
    index++;
}

void buscarProducto(Producto productos[], int index){
    string nombre;
    cout<<"Digite nombre del producto a buscar: ";
    cin>>nombre;

    for(int i = 0; i < index; i++)
        if(productos[i].nombre == nombre){
            cout<<"Se encontro el producto: "<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Precio: "<<productos[i].precio<<endl;
            cout<<"Stock: "<<productos[i].stock<<endl;
            return;
        }
    
    cout<<"No se encontro el producto"<<endl;
}

void modificarProducto(Producto productos[], int index){
    string nombre;
    cout<<"Digite nombre del producto a modificar: ";
    cin>>nombre;


    for(int i = 0; i < index; i++)
        if(productos[i].nombre == nombre){
            cout<<"Se encontro el producto: "<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Digite nuevo Precio: ";
            cin>>productos[i].precio;
            cout<<"Digite nuevo Stock: ";
            cin>>productos[i].stock;
            return;
        }
    cout<<"No se encontro el producto"<<endl;
    
}


void menu(){
    cout<<"----Menu----"<<endl;
    cout<<"1. Agregar Producto"<<endl;
    cout<<"2. Buscar Producto"<<endl;
    cout<<"3. Actualizar Producto"<<endl;
    cout<<"4. Salir"<<endl;
}

int main(){

    Producto productos[10];

    int opc, i = 0;
    do{
        menu();
        cout<<"Digite opcion: ";
        cin>>opc;
        switch (opc) {
            case 1: nuevoProducto(productos,i); break;
            case 2: buscarProducto(productos, i); break;
            case 3: modificarProducto(productos,i); break;
            case 4: cout<<"Saliendo"<<endl;
            default: cout<<"No es una opcion"<<endl;
        }
    }while(opc != 4);

    return 0;
}