#include<iostream>
using namespace std;

void sumar(int a, int b){
    int resultado;
    resultado = a + b;
    cout<<"Suma: "<<resultado<<endl;
}

void restar(int a, int b){
    int resultado;
    resultado = a - b;
    cout<<"Resta: "<<resultado<<endl;
}

void multiplicar(int a, int b){
    int resultado;
    resultado = a * b;
    cout<<"Producto: "<<resultado<<endl;
}

void dividir(int a, int b){
    float resultado;
    resultado = a*1.0/b;
    cout<<"Division: "<<resultado<<endl;
}

int main(){

    void (*funcion[4])(int,int) = {sumar,restar,multiplicar,dividir};
    
    int a,b;
    cout<<"Digite un numero entero: ";cin>>a;
    cout<<"Digite otro numero entero: ";cin>>b;

    for(int i = 0; i < 4; i++){
        funcion[i](a,b);
    }

    return 0;
}