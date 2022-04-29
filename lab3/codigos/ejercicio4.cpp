#include<iostream>
using namespace std;

bool esPrimo(int x){
    int count = 0;
    for(int i = 1; i <= x; i++)
        if(x % i == 0)
            count++;
    
    if(count == 2)
        return true;
    return false;
}

int main(){

    unsigned int x;
    cout<<"Digite un numero entero mayor a 1: ";
    cin>>x;
    for(int i = 1; i <= x; i++)
        if(esPrimo(i))
            cout<<i<<endl;
    return 0;
}