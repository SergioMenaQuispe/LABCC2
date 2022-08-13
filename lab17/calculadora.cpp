#include<iostream>
using namespace std;

template<class T>
class Calculadora{
    public:
        inline T suma(T a, T b) {return a + b;}
        inline T resta(T a, T b) {return a - b;}
        inline T producto(T a, T b) {return a * b;}
        T division(T a, T b){
            if(b == 0) return T(NULL);
            return a / b;
        }
};

int main(){

    Calculadora<float> calc;
    cout<<calc.producto(6.6,7.2)<<endl;
    cout<<calc.division(6.2,0.11)<<endl;

    Calculadora<char> calc2;
    cout<<calc2.suma('1','-')<<endl;

    return 0;
}