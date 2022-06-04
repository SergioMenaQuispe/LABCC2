#include<iostream>
#include<vector>
using namespace std;


template<typename T>
vector<T> mayorYmenor(T a, T b, T c){
    T mayor = a;
    if(b > mayor) mayor = b;
    if(c > mayor) mayor = c;

    T menor = a;
    if(b < menor) menor = b;
    if(c < menor) menor = c; 

    vector<T> retornos = {mayor,menor};

    return retornos;
}

int main(){

    int a = 5, b = 3, c = 4;
    cout<<"El mayor de: "<<a<<" "<<b<<" "<<c<<" es: "<<mayorYmenor(a,b,c)[0]<<endl;
    cout<<"El menor de: "<<a<<" "<<b<<" "<<c<<" es: "<<mayorYmenor(a,b,c)[1]<<endl;
    cout<<endl;

    float d = 5.6, e = -2.3, f = 9.56;
    cout<<"El mayor de: "<<d<<" "<<e<<" "<<f<<" es: "<<mayorYmenor(d,e,f)[0]<<endl;
    cout<<"El menor de: "<<d<<" "<<e<<" "<<f<<" es: "<<mayorYmenor(d,e,f)[1]<<endl;
    cout<<endl;

    double g = 6.75354, h = 1.0001, i = 5.4;
    cout<<"El mayor de: "<<g<<" "<<h<<" "<<i<<" es: "<<mayorYmenor(g,h,i)[0]<<endl;
    cout<<"El menor de: "<<g<<" "<<h<<" "<<i<<" es: "<<mayorYmenor(g,h,i)[1]<<endl;
    cout<<endl;

    return 0;
}