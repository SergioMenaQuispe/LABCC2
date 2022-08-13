#include<iostream>
using namespace std;

template<int n>
struct Fibonacci
{
    enum { value = Fibonacci<n-1>::value + Fibonacci<n-2>::value };
};

template<>
struct Fibonacci < 1 >
{
    enum { value = 1 };
};


template<>
struct Fibonacci < 0 >
{
    enum { value = 0 };
};


int main(){

    cout<<Fibonacci<6>::value<<endl;
    return 0;
}