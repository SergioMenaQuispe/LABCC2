#include <iostream>
using namespace std;

float media(int x){
    int suma = 0, n;
    for(int i = 0; i < x; i++){
        cout<<"Numero "<<i+1<<" : ";
        cin>>n;
        suma += n;
    }
    float m = suma*1.0/x;
    return m;
}

int main(){

    int x;
    float m;
    cout<<"Cuantos numeros desea sacar la media: ";
    cin>>x;
    m = media(x);
    cout<<"La media total es: "<<m<<endl;

    return 0;
}