#include<iostream>
using namespace std;

int main(){

    const string contrasenia = "aslkndsfkj";
    string contra;
    int i = 1;
    do{
        cout<<"Intento "<<i<<endl;
        cout<<"Digite contrasenia: ";
        cin>>contra;
        i++;
    }while(contra != contrasenia);

    cout<<"Logro asertar la contrasenia"<<endl;

    return 0;
}