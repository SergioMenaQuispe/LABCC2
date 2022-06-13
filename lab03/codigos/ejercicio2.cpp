#include<iostream>
using namespace std;

bool esBisiesto(unsigned int anio){
    if(anio % 4 == 0 && (anio % 400 == 0 || anio % 100 != 0))
        return true;
    return false;
}

int main(){

    int anio;
    cout<<"Digite un año: ";
    cin>>anio;
    if(esBisiesto(anio))
        cout<<anio<<" Es bisiesto"<<endl;
    else
        cout<<anio<<" No es bisiesto"<<endl;

    return 0;
}