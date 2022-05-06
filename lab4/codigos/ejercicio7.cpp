#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int arr[5][5];

void displayArr(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
            cout<<arr[i][j]<<"\t";
        cout<<endl;
    }
}   

void moverFila(int index, bool direccion){
    int aux[5];
    if(direccion) { // arriba
        if(index <= 0 || index > 4){
            cout<<"No se puede realizar la operacion"<<endl;
            system("sleep 1.5");
            return;
        }
        else{
            for(int i = 0; i  < 5; i++){
                aux[i] = arr[index][i];
                arr[index][i] = arr[index-1][i];
                arr[index-1][i] = aux[i];
            }
        }
    }else{ // abajo
        if(index >= 4 || index < 0){
            cout<<"No se puede realizar la operacion"<<endl;
            system("sleep 1.5");

            return;
        }
        else{
            for(int i = 0; i  < 5; i++){
                aux[i] = arr[index][i];
                arr[index][i] = arr[index+1][i];
                arr[index+1][i] = aux[i];
            }
        }
    }
        
}

void moverColumna(int index, bool direccion){
    int aux[5];
    if(direccion) { // izquierda
        if(index <= 0 || index > 4){
            cout<<"No se puede realizar la operacion"<<endl;
            system("sleep 1.5");
            return;
        }
        else{
            for(int i = 0; i  < 5; i++){
                aux[i] = arr[i][index];
                arr[i][index] = arr[i][index-1];
                arr[i][index-1] = aux[i];
            }
        }
    }else{ // derecha
        if(index >= 4 || index < 0){
            cout<<"No se puede realizar la operacion"<<endl;
            system("sleep 1.5");

            return;
        }
        else{
            for(int i = 0; i  < 5; i++){
                aux[i] = arr[i][index];
                arr[i][index] = arr[i][index+1];
                arr[i][index+1] = aux[i];
            }
        }
    }
      
}

void menu(){
    cout<<"----MENU----"<<endl;
    cout<<"1. Mostrar Array"<<endl;
    cout<<"2. Mover fila hacia Arriba"<<endl;
    cout<<"3. Mover fila hacia Abajo"<<endl;
    cout<<"4. Mover columna hacia izquierda"<<endl;
    cout<<"5. Mover columna hacia la derecha"<<endl;
    cout<<"6. Salir"<<endl;

}

int main(){
    
    srand(time(NULL));

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
            arr[i][j] = 1 + rand() % 10;
    }

    int opc, aux;
    do{
        menu();
        cout<<"Digite opc: ";
        cin>>opc;
        switch (opc) {
            case 1: {
                displayArr(); 
                system("sleep 2");
            }break;
            case 2: {
                cout<<"Cual fila desea mover: ";
                cin>>aux;
                moverFila(aux,true);
            }break;
            case 3: {
                cout<<"Cual fila desea mover: ";
                cin>>aux;
                moverFila(aux,false);
            }break;
            case 4: {
                cout<<"Cual columna desea mover: ";
                cin>>aux;
                moverColumna(aux,true);
            } break;
            case 5: {
                cout<<"Cual columna desea mover: ";
                cin>>aux;
                moverColumna(aux,false);
            } break;
            case 6: cout<<"Saliendo..."<<endl;break;
            default: cout<<"No es una opcion valida"<<endl; break;
        }
        system("clear");
    }while(opc != 6);
        

    return 0;
}