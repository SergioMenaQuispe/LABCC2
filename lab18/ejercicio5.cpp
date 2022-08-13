#include<iostream>
using namespace std;

template<int n>
struct Binario{
	enum { value =  n % 2 + Binario<n / 2>::value * 10 };
};

template<>
struct Binario <0>
{
    enum { value = 0 };
};


int main(){  

    cout<<Binario<453>::value<<endl;

    return 0;
}