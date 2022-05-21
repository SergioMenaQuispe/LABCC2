#include<iostream>
#include <string>
using namespace std;

class Ave{
    protected:
        string nombre;    
    public:
        Ave(string nombre){
            this->nombre = nombre;
        }
        void presentacion(){
            cout<<nombre<<" es un ave"<<endl;
        }
};

class Ganso : public Ave{
    public:
    Ganso(string nombre):Ave(nombre){}
    void grasnar(){
        cout<<"El ganso "<<nombre<<" esta grasnando"<<endl;
    }
};

class Pato : public Ave{
    public:
    Pato(string nombre):Ave(nombre){}
    void nadar(){
        cout<<"El pato "<<nombre<<" esta nadando"<<endl;
    }
};

class Gallina : public Ave{
    public:
    Gallina(string nombre):Ave(nombre){}
    void cantando(){
        cout<<"La gallina "<<nombre<<" esta cantando"<<endl;
    }
};

int main(){

    Ganso g("Pedrito");
    g.presentacion();
    g.grasnar();

    cout<<endl;

    Pato p("Patito");
    p.presentacion();
    p.nadar();

    cout<<endl;

    Gallina ga("Carola");
    ga.presentacion();
    ga.cantando();

    return 0;
}