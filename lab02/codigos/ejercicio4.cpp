// Sergio Mena Quispe
#include<iostream>
using namespace std;

bool esPrimo(int n){
    int divisores = 0;
    for(int i = 1; i <= n; i++)
        if(n % i == 0)
            divisores++;

    return (divisores == 2);

}

int main(){

    int x, y;
    do {
        cout<<"x tiene que se menor que y:"<<endl;
        cout<<"Digite x: ";cin>>x;
        cout<<"Digite y: ";cin>>y;
        cout<<endl;
    }while (!(x < y));

    int count = 0;
    for(int i = x; i <= y; i++)
        if(esPrimo(i)){
            cout<<i<<endl;
            count++;
        }
    
    if(count == 0){
        int num1 = x, num2 = x, num3 = y, num4 = y;
        while(!(esPrimo(num1) || esPrimo(num2) || esPrimo(num3) || esPrimo(num4))){
            num1--;
            num2++;
            num3--;
            num4++;
        }

        cout<<"El numero primo más cercano es: ";
        if(esPrimo(num1))
            cout<<num1<<endl;
        else if(esPrimo(num2))
            cout<<num2<<endl;
        else if(esPrimo(num3))
            cout<<num3<<endl;
        else
            cout<<num4<<endl;
    }

    return 0;
}