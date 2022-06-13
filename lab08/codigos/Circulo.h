#include"Elipse.h"
class Circulo : public Elipse{
    public:
        Circulo():Elipse(){}
        Circulo(string color, double x, double y, char nombre, float radio):
            Elipse(color,x,y,nombre,radio,radio){}
        ~Circulo(){delete centro;}
        void imprimir(){
            cout<<"Es un Circulo"<<endl;
            Forma::imprimir();           
            cout<<"Radio: "<<radioMayor<<endl;
        }
};
