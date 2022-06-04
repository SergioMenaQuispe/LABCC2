#include<iostream>
using namespace std;

template<typename T1, typename T2>
void operacionesBasicas(T1 a, T2 b){
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    cout<<a<<" * "<<b<<" = "<<a*b<<endl;
    cout<<a<<" / "<<b<<" = "<<a/b<<endl;
    cout<<endl;
}


int main(){

    operacionesBasicas(5,6.7);
    operacionesBasicas(1.4,1);
    operacionesBasicas(0,-6.44);

    return 0;
}