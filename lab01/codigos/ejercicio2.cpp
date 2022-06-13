#include <cctype>
#include<iostream>
using namespace std;

string correoUnsa(string nombre, string apellidoPaterno, string apellidoMaterno){
    const string dominio = "@unsa.edu.pe";
    string correo = "";
    correo += tolower(nombre[0]);
    for(int i = 0; i < apellidoPaterno.length(); i++)
        apellidoPaterno[i] = tolower(apellidoPaterno[i]);
    correo += apellidoPaterno;
    correo += tolower(apellidoMaterno[0]);
    correo += dominio;

    return correo;
}

int main(){

    string nombre, apPaterno, apMaterno;
    cout<<"Digite su nombre: ";cin>>nombre;
    cout<<"Digite su apellido Paterno: ";cin>>apPaterno;
    cout<<"Digite su apellido Materno: ";cin>>apMaterno;
    cout<<"Su correo UNSA es: "<<correoUnsa(nombre,apPaterno,apMaterno)<<endl;

    return 0;
}