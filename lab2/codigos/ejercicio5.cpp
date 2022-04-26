// Sergio Mena Quispe
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Digite n: ";
    cin>>n;

    int num, mayor, menor;
    float media = 0;
    cout<<"Digite un numero 1: ";cin>>num;
    mayor = num;
    menor = num;
    media += num;

    for(int i = 1; i < n; i++){
        cout<<"Digite un numero "<<i+1<<": ";
        cin>>num;
        if(num > mayor)
            mayor = num;
        if(num < menor)
            menor = num;
        media += num;
    }

    cout<<"Mayor: "<<mayor<<endl;
    cout<<"Menor: "<<menor<<endl;
    cout<<"Media: "<<media*1.0/n<<endl;


    return 0;
}