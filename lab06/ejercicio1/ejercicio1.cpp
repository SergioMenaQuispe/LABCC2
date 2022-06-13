#include<iostream>
#include"Rectangulo.h"
using namespace std;

int main(){

    Rectangulo r(4,5);
    cout<<"El perimetro es: "<<r.getPerimetro()<<endl;
    cout<<"El area es: "<<r.getArea()<<endl;
    
    return 0;  
}
