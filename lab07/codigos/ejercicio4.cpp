#include<iostream>
using namespace std;

class claseMultimedia{
    protected:
        float duracion;
        string nombre;
};

class claseDisco : public claseMultimedia{
        string autor;
    public:
        claseDisco(string nombre,string autor, float duracion){
            this->nombre = nombre;
            this->autor = autor;
            this->duracion = duracion;
        }

        void imprimir(){
            cout<<"Nombre del disco: "<<nombre<<endl;
            cout<<"Autor del disco: "<<autor<<endl;
            cout<<"Duracion: "<<duracion<<endl;
        }
};

int main(){

    claseDisco d("Disco1","Autor1",14.5);
    d.imprimir();
    return 0;
}