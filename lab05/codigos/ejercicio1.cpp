#include<iostream>
using namespace std;

int main(){

    int a = 5;
    int b = 6;

    int *aPtr = &a,
        *bPtr = &b;
    
    int aux = *aPtr;
    *aPtr = *bPtr;
    *bPtr = aux;


    cout<<a<<endl;
    cout<<b;


    return 0;
}