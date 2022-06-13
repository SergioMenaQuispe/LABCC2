// Sergio Mena Quispe
#include<iostream>
using namespace std;

void tablaMultiplicar(int n){
    for(int i = 0; i < 13; i++)
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
}

int main(){

    int n;
    cout<<"Digite un numero entero: ";
    cin>>n;
    tablaMultiplicar(n);

    return 0;
}