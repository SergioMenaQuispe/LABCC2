// Sergio Mena Quispe
#include<iostream>
using namespace std;

void finbonacci(int x)
{
    int n1= 0;
    int n2= 1;
    int aux;

    if (x == 1) {
        cout << 0 << endl;
        return;
    }
    cout << n1<< " " << n2;
    for (int i = 3; i <= x; i++)
    {
        aux = n1+ n2;
        cout << " " << aux;
        n1= n2;
        n2= aux;
    }
}

int main(){

    int n;
    cout<<"Digite numero entero: ";
    cin>>n;
    finbonacci(n);

    return 0;
}