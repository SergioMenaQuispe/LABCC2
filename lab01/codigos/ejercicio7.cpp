#include<iostream>
using namespace std;

bool esDivisor(int a, int b){
    if(a % b == 0)
        return true;
    else
        return false;
}

int main(){

    int a, b;
    cout<<"Digite un numero: ";cin>>a;
    cout<<"Digte otro numero: ";cin>>b;    

    if(esDivisor(a,b))
        cout<<b<<" es divisor de "<<a<<endl;
    if(esDivisor(b,a))
        cout<<a<<" es divisor de "<<b<<endl;

    return 0;
}