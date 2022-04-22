#include<iostream>
using namespace std;

int producto(int a, int b){
    return a*b;
}

int main(){

    int a, b;
    cout<<"Digite dos numeros: "<<endl;
    cout<<"Num. 1: ";cin>>a;
    cout<<"Num. 2: ";cin>>b;
    cout<<"El producto es: "<<producto(a, b)<<endl;

    return 0;
}