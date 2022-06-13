// Sergio Mena Quispe
#include<iostream>
using namespace std;

float promedio(){

    int arr[3], suma = 0;
    for(int i = 0; i < 3; i++){
        cout<<"Digte nota: ";
        cin>>arr[i];
        suma += arr[i];
    }
    return suma/3.0;
}

int main(){

    int n;
    float p;
    cout<<"Cuantos alumnos?: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cout<<"Notas para el alumno "<<i+1<<": "<<endl;
        p = promedio();
        cout<<"El promedio es: "<<p<<endl;
        cout<<endl;
    }
    return 0;
}