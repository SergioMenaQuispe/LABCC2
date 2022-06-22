#include<iostream>
using namespace std;

struct empleado{
    string nombre;
    char sexo;
    float sueldo;
};

typedef empleado Empleado;

void ingresarDatos(Empleado empleados[], int size){
    for(int i = 0; i < size; i++){
        cout<<"Digite su nombre: ";
        cin>>empleados[i].nombre;
        cout<<"Digite sexo (M,F,O): ";
        cin>>empleados[i].sexo;
        empleados[i].sexo = toupper(empleados[i].sexo);
        
        if(empleados[i].sexo != 'M' && empleados[i].sexo != 'F'){
            empleados[i].sexo = 'O';
        }

        cout<<"Digite el sueldo: ";
        cin>>empleados[i].sueldo;
    }
}


ostream& operator<<(ostream &output, const Empleado e){
    cout<<"Nombre: "<<e.nombre<<". Sexo: "<<e.sexo<<" Sueldo: "<<e.sueldo<<endl;
    return output;
}   

void mayorYmenor(Empleado empleados[], int size){
    float menor;
    float mayor = menor = empleados[0].sueldo;

    int indexMenor;
    int indexMayor = indexMenor = 0;

    for(int i = 1; i < size; i++){
        if(empleados[i].sueldo > mayor){
            mayor = empleados[i].sueldo;
            indexMayor = i;
        }

        if(empleados[i].sueldo < menor){
            menor = empleados[i].sueldo;
            indexMenor = i;
        }
    }

    cout<<"El empleado con mayor sueldo es:"<<endl;
    cout<<empleados[indexMayor]<<endl;
    cout<<"El empleado con menor sueldo es:"<<endl;
    cout<<empleados[indexMenor]<<endl;

}


int main(){

    int n;
    cout<<"Cuantos empleados desea ingresar: ";
    cin>>n;
    Empleado empleados[n];
    ingresarDatos(empleados,n);
    mayorYmenor(empleados,n);

    return 0;
}