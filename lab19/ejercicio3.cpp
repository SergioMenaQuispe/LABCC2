#include<iostream>
#include<vector>
#include<time.h>
#include<algorithm>
using namespace std;

class Elemento{
    public:
    int a, b;
};

class compararElementos{
    public:
    bool operator()(Elemento & e1, Elemento & e2){
        return e1.a < e2.b;
    }
};

int main(){

    Elemento lista[20];

    srand(time(NULL));
    for(int i = 0; i < 20; i++){
        Elemento e;
        e.a = 1 + rand() % 100;
        e.b = 1 + rand() % 100;
        lista[i] = e;
    }


    for(int i = 0; i < 20; i++){
        cout<<lista[i].a<<"\t"<<lista[i].b<<endl;
    }

    cout<<endl;
    sort(lista,lista+20,compararElementos());


    for(int i = 0; i < 20; i++){
        cout<<lista[i].a<<"\t"<<lista[i].b<<endl;
    }
    
    return 0;
}