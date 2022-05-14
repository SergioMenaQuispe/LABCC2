#include<iostream>
using namespace std;

class Alumno{
    private:
        string nombre;
        int notas[3];
        float notaFinal;
        unsigned int CUI;
    public:
        Alumno(string nombre, int notas[], int CUI){
            this->nombre = nombre;
            for(int i = 0; i < 3; i++) this->notas[i] = notas[i];
            this->CUI = CUI;
        } 

        float promedio(){
            float p = 0;
            for(int i = 0; i < 3; i++) p += notas[i];
            p = p/3.0;
            this->notaFinal = p;
            return p;
        }

        bool aprobado(){
            return this->notaFinal >= 10.5;
        }

        void getDatos(){
            cout<<"Nombre: "<<this->nombre<<endl;
            cout<<"CUI: "<<this->CUI<<endl;
            cout<<"Promedio: "<<promedio()<<endl;
            if(aprobado())
                cout<<"Aprobado"<<endl;
            else 
                cout<<"Desaprobado"<<endl;
        }
};
