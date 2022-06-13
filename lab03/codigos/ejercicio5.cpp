#include<iostream>
using namespace std;

int introducirValor(){
    int x;
    do {
        cout<<"Digite valor entre 0 a 100: ";
        cin>>x;
    }while (!(x >= 0 && x <= 100));

    return x;
}

bool esPar(int x){
    return (x % 2 == 0);
}

int sumarImpares(int x){
    int sum = 0;
    for(int i = 0; i <= x; i++)
        if(!esPar(i))
            sum += i;
    return sum;
}

int main(){

    int x = introducirValor();
    cout<<"El numero es: "<<x<<endl;
    if(esPar(x))
        cout<<"Es par"<<endl;
    else
        cout<<"No es par"<<endl;

    cout<<"La suma total de impares es: "<<sumarImpares(x)<<endl;
    
    return 0;
}