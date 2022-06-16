#include"Pila.h"

void mostrarTorres(Pila &A, Pila &B, Pila &C){
    cout<<"A: "; A.display();
    cout<<"B: "; B.display();
    cout<<"C: "; C.display();
}

void moverDato(Pila &orig, Pila &dest){
    int dato = orig.pop();
    dest.push(dato);
}

void hanoi(int discos, Pila &A, Pila &B, Pila &C){ 
    if(discos == 1){
        moverDato(A,C);
        mostrarTorres(A,B,C);
        system("sleep 1.6");
        system("clear");
    }else{
        hanoi(discos-1,A,C,B);
        moverDato(A,C);
        mostrarTorres(A,B,C);
        system("sleep 1.6");
        system("clear");
        hanoi(discos-1,B,A,C);

    }
}

void menu(){
    cout<<"------MENU-------"<<endl;
    cout<<"1. Insertar elemeento a la pila"<<endl;
    cout<<"2. Borrar elemeento de la pila"<<endl;
    cout<<"3. Buscar elemento de la pila"<<endl;
    cout<<"4. Resolver las torres de hanoi"<<endl;
    cout<<"5. Salir"<<endl;
}

int main(){

    Pila p;
    Pila A, B, C;

    int opc, dato;
    do{
        menu();
        cout<<"Digite una opcion: ";
        cin>>opc;

        switch (opc)
        {
        case 1:
            cout<<"Digite elemento a agregar: ";cin>>dato;
            p.push(dato);
            p.display();
        break;
        case 2:
            p.pop();
            p.display();
        break;
        case 3:
            cout<<"Digite elemento a buscar: ";cin>>dato;
            p.find(dato);
        break;
        case 4:{
            int discos;
            cout<<"Digite el numero de discos: "; cin>> discos;

            for(int i = discos; i > 0; i--){
                A.push(i);
            }

            cout<<"Torres de inicio: "<<endl;
            mostrarTorres(A,B,C);
            system("sleep 1.6");
            system("clear");
            hanoi(discos,A,B,C);

            cout<<"Resultado final: "<<endl;
            mostrarTorres(A,B,C);

            A.deletePila();
            B.deletePila();
            C.deletePila();
        }

        default:
            break;
        }
    }while(opc != 5);
    
    return 0;
}