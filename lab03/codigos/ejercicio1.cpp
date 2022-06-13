#include<iostream>
using namespace std;

double potencia(float base, float exp){
    double p = 1;
    for(int i = 0; i < exp; i++)
        p *= base;
    return p;
}

int main(){

    float base,exp;
    cout<<"Digite la base: ";cin>>base;
    cout<<"Digite el exponenete: ";cin>>exp;
    cout<<potencia(base, exp)<<endl;

    return 0;
}