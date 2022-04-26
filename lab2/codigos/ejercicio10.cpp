// Sergio Mena Quispe
#include <iostream>
using namespace std;

int main(){

    string palabra;
    cout<<"Digite una palabra: ";
    cin>>palabra;

    for(int i = palabra.length(); i >= 0; i--)
        cout<<palabra[i]<<" ";
    cout<<endl;

    return 0;
}