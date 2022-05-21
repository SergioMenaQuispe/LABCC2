#include<iostream>
#include <string>
using namespace std;

class Persona{
    protected:
        int edad;
        string nombre;
    public:
        void getDatos(){
            cout<<nombre<<" "<<edad<<endl;
        }
};

class Alumno : public Persona{
    public:
        Alumno(int edad, string nombre){
            this->edad = edad;
            this->nombre = nombre;
        }
};

int main(){

    Alumno a(18,"Sergio");
    a.getDatos();
    return 0;
}