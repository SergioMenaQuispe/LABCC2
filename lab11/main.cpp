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


int main(){

    Pila A, B, C;
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
    
    return 0;
}