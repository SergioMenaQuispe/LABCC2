#include<iostream>
using namespace std;

struct Ropa
{
    int codigo;
    string nombre;
    float precio;

    bool activo;

    Ropa * sig;

    Ropa(){
        sig = NULL;
        activo = true;
    }


    Ropa(int codigo, string nombre, float precio){
        sig = NULL;
        activo = true;
        this->codigo = codigo;
        this->nombre = nombre;
        this->precio = precio;
    }
};

void push(Ropa *&ropas){
    Ropa * nuevo = new Ropa;
    Ropa * actual = ropas;
    while(actual->sig != NULL){
        actual = actual->sig;
    }
    actual->sig = nuevo;
}

void pop(Ropa *&ropas){
    Ropa * actual = ropas;
    Ropa * anterior;
    while(actual->sig != NULL){
        anterior = actual;
        actual = actual->sig;
    }

    anterior->sig = NULL;
    delete actual;
}

int cantidad(Ropa *ropas){
    int count = 0;
    Ropa *actual = ropas;
    while (actual != NULL){
        count++;
        actual = actual->sig;
    }
    return count;
}


void menu(){
    cout<<"ADMINISTRAR PRODUCTOS:"<<endl;
    cout<<"1. Dar de alta nuevo producto"<<endl;
    cout<<"2. Dar de baja un producto"<<endl;
    cout<<"3. Buscar un producto"<<endl;
    cout<<"4. Modificar producto"<<endl;
    cout<<"5. Salir"<<endl;
}

int main(){


    Ropa **ropas;
    int cantMaxProductos = 10, cantProductos = 0, cant, codigo;
    ropas = new Ropa * [cantMaxProductos];

    int opc;

    do{
        menu();
        cout<<"Digite una opcion: ";
        cin>>opc;

        switch(opc)
        {
            case 1:
                ropas[cantProductos] = new Ropa;

                cout<<"Digite codigo del producto: ";
                cin>>ropas[cantProductos]->codigo;

                cout<<"Digite nombre del producto: ";
                cin>>ropas[cantProductos]->nombre;

                cout<<"Digite precio del producto: ";
                cin>>ropas[cantProductos]->precio;

                cout<<"Digite la cantidad del producto: ";
                cin>>cant;

                for(int i = 1; i < cant; i++)
                    push(ropas[cantProductos]);

                cantProductos++;
                break;
            case 2:
                cout<<"Digite el codigo del producto a dar de baja: ";
                cin>>codigo;

                int i;
                for(i = 0; i < cantProductos; i++){
                    if(ropas[i]->codigo == codigo)
                        break;
                }
                
                if(i != cantProductos){
                    Ropa * aux = ropas[i];
                    while(aux != NULL){
                        aux->activo = !(aux->activo);
                        aux = aux->sig;
                    }
                    if(!ropas[i]->activo)
                        cout<<"Este producto no estará activo para ninguan función al menos que se active nuevamente"<<endl;
                    else 
                        cout<<"Producto activado"<<endl;
                }else{
                    cout<<"El producto no existe"<<endl;
                }
                
                break;
            case 3:
                cout<<"Digite el codigo del producto a buscar: ";
                cin>>codigo;

                int h;
                for(h = 0; h < cantProductos; h++){
                    if(ropas[h]->codigo == codigo)
                        break;
                }
                
                if(h != cantProductos && ropas[h]->activo){
                    cout<<"Codigo: "<<ropas[h]->codigo<<endl;
                    cout<<"Nombre: "<<ropas[h]->nombre<<endl;
                    cout<<"Precio: "<<ropas[h]->precio<<endl;
                    cout<<"Cantidad: "<<cantidad(ropas[h])<<endl;
                }else{
                    cout<<"El producto no existe o se encuentra de baja"<<endl;
                }
    
                break;
            case 4:
                cout<<"Digite el codigo del producto a modificar: ";
                cin>>codigo;

                int k;
                for(k = 0; k < cantProductos; k++){
                    if(ropas[k]->codigo == codigo)
                        break;
                }
                
                if(k != cantProductos){
                    cout<<"Digite nuevo codigo del producto: ";
                    cin>>ropas[k]->codigo;

                    cout<<"Digite nuevo nombre del producto: ";
                    cin>>ropas[k]->nombre;

                    cout<<"Digite nuevo precio del producto: ";
                    cin>>ropas[k]->precio;

                    cout<<"Digite nueva cantidad del producto: ";
                    cin>>cant;
                    
                    int anteriorCantidad = cantidad(ropas[k]);
                    if(cant != anteriorCantidad){
                        for(int j = anteriorCantidad; j > 1; j--){
                            pop(ropas[k]);
                        }

                        for(int j = 0; j < cant-1; j++)
                            push(ropas[k]);
                    }

                }else{
                    cout<<"El producto no existe"<<endl;
                }

                break;
            case 5:
                break;
            
            default:
                cout<<"No es una opcion valida"<<endl;
                break;
        }
        cout<<endl;
    }while(opc != 5);


    return 0;
}