// Sergio Mena Quispe
#include<iostream>
using namespace std;

void triangulo(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i >= j)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

}

int main(){

    int n;
    cout<<"Digite un numero entero: ";
    cin>>n;
    triangulo(n);
    return 0;
}