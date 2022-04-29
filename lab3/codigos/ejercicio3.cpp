#include<iostream>
using namespace std;

int verificarNumero(int param){
    int num;
    do {
        cout<<"Digite numero: ";
        cin>>num;
    }while (!(num > 0 && num <= param));

    return num;
}

void getDate(int arr[]){
    cout<<"Dia:"<<endl;
    arr[0] = verificarNumero(31);
    cout<<endl;
    cout<<"Mes: "<<endl;
    arr[1] = verificarNumero(12);
    cout<<endl;
    cout<<"Año:"<<endl;
    cout<<"Digite numero: ";
    cin>>arr[2];
    cout<<endl;
}

int positivo(int x){
    if(x < 0)
        return x*-1;
    return x;
}

void getEdad(int arr1[], int arr2[], string arr3[]){
    for(int i = 0; i < 3; i++)
        cout<<positivo(arr1[i]-arr2[i])<<" "<<arr3[i]<<"  -   ";
    cout<<endl;
}

int main(){

    int fechaActual[3], fechaNacimiento[3];
    string aux[3] = {"Dias","Meses","Años"};
    cout<<"Fecha actual: "<<endl,
    getDate(fechaActual);
    cout<<endl;
    cout<<"Fecha de nacimiento: "<<endl,
    getDate(fechaNacimiento);
    cout<<endl;

    for(int i = 0; i < 3; i++)
        cout<<fechaActual[i]<<endl;
    
    for(int i = 0; i < 3; i++)
        cout<<fechaNacimiento[i]<<endl;

    getEdad(fechaActual, fechaNacimiento, aux);

    return 0;
}