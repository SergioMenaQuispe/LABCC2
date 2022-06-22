#include<iostream>
#include<ctime>
using namespace std;


time_t hoy = time(0);
struct tm *local = localtime(&hoy);

struct persona{
    string nombre;
    int cumple[3];
};


typedef persona Persona;

void verificarFecha(Persona &p){
    int anio = local->tm_year + 1900;

    int d, m, a;
    cout<<"Digite su fecha de nacimiento:"<<endl;
    do{
        cout<<"Dia: ";cin>>d;
        if(!(d <= 31 && d >= 1))
            cout<<"Digite un valor correcto entre 1 y 31"<<endl;
    }while(!(d <= 31 && d >= 1));

    do{
        cout<<"Mes: ";cin>>m;
        if(!(m <= 12 && m >= 1))
            cout<<"Digite un valor correcto entre 1 y 12"<<endl;
    }while(!(m <= 12 && m >= 1));

    do{
        cout<<"Año: ";cin>>a;
        if(!(a <= anio))
            cout<<"Digite un valor menor al año actual"<<endl;
    }while(!(a <= anio));

    p.cumple[0] = d;
    p.cumple[1] = m;
    p.cumple[2] = a;
}

void ingresarDato(Persona compas[], int size){
    for(int i = 0; i < size; i++){
        cout<<"Digite su nombre ";
        cin>>compas[i].nombre;
        verificarFecha(compas[i]);
    }
}

ostream& operator<<(ostream &output, const Persona p){
    output << p.nombre << " cumple años en " << to_string(p.cumple[0]) << "/" << to_string(p.cumple[1]) << "/" << to_string(p.cumple[2]) << "\n";
    return output;
}

void mostrar(const Persona compas[], int size){
    int mes = local->tm_mon + 1;

    for(int i = 0; i < size; i++){
        if(compas[i].cumple[1] == mes){
            cout<<compas[i];
        }
    }
}


int main(){

    int n;
    cout<<"Cuantas personas desea agregar: ";
    cin>>n;
    Persona compas[n];
    ingresarDato(compas,n);
    mostrar(compas,n);

    return 0;
}