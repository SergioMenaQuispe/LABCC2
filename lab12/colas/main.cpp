#include "Cola.h"

void agregarCola(Cola &cola, int n){
    int dato;
    for(int i = 0; i < n; i++){
        cout<<"Digite la pos "<<i<<": ";
        cin>>dato;
        cola.push(dato);
    }
}

void colasHombresMujeres(int cantHombres, int cantMujeres, int numIteraciones){
    Cola hombres, mujeres;
    cout<<"Cola de hombres:"<<endl;
    agregarCola(hombres,cantHombres);
    cout<<endl<<"Cola de mujeres:"<<endl;
    agregarCola(mujeres,cantMujeres);
    cout<<endl;

    int h, m;
    for(int i = 0; i < numIteraciones; i++){
        h = hombres.pop();
        m = mujeres.pop();
        
        cout<<"Iteracion nro. : "<<i<<endl;
        if(h > m)
            cout<<"Cola de hombre "<<h<<" mayor que Cola de mujeres "<<m<<endl;
        else if (m > h)
            cout<<"Cola de mujeres "<<m<<" mayor que Cola de hombres "<<h<<endl;
        else 
            cout<<"Ambas colas tienen la misma edad"<<endl;
        
        cout<<endl;
        
        hombres.push(h);
        mujeres.push(m);
    }
}

void menu(){
    cout<<"-------Menu--------"<<endl;
    cout<<"1. Agregar elemento a la cola"<<endl;
    cout<<"2. Eliminar elemento de la cola"<<endl;
    cout<<"3. Encontrar elemento en la cola"<<endl;
    cout<<"4. Ejercicio colas de hombres y mujeres"<<endl;
    cout<<"5. Salir"<<endl;
}

int main(){

    int opc, dato;
    Cola c;
    do{
        menu();
        cout<<"Digite su opcion: ";
        cin>>opc;
        switch (opc)
        {
        case 1: {
            cout<<"Digite elemento a agregar: "; cin>> dato;
            c.push(dato);
            c.display();
        }break;
        case 2: {
            dato = c.pop();
            cout<<"Se elemino elemento: "<<dato<<endl;
            c.display();
        }break;
        case 3: {
            cout<<"Digite elento a buscar: "; cin>>dato;
            c.find(dato);
        }break;
        case 4: {
            int cantHombres, cantMujeres, cantIteraciones;
            cout<<"Digite la cantidad de personas en la cola de hombres: ";
            cin>>cantHombres;
            cout<<"Digite la cantidad de personas en la cola de mujeres: ";
            cin>>cantMujeres;
            cout<<"Digite la cantidad de iteraciones: ";
            cin>>cantIteraciones;
            colasHombresMujeres(cantHombres,cantMujeres,cantIteraciones);
        }break;
        
        default: cout<<"No es una opcion valida"<<endl; break;
        case 5: break;
        }
    }while(opc != 5);

 

    return 0;
}