#include<iostream>
using namespace std;

template<int x, int y>
struct Potencia
{
    enum { value = x * (Potencia<x,y-1>::value) };
};

template<int x>
struct Potencia < x , 0>
{
    enum { value = 1 };
};



int main(){

    cout<<Potencia<3,9>::value<<endl;
    return 0;
}