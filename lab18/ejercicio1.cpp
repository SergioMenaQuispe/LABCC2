#include<iostream>
#include<cmath>
using namespace std;

template<long num>
struct SumaDigitos
{
    enum { value = SumaDigitos< num/10 >::value + num % 10 };
};

template<>
struct SumaDigitos <0>
{
    enum { value = 0 };
};

int main(){

    cout<<SumaDigitos<123456>::value<<endl;

    return 0;
}