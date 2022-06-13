#include"Rectangulo.h"
class Cuadrado : public Rectangulo{
    public:
        Cuadrado():Rectangulo(){}
        Cuadrado(string color, double x, double y, char nombre, float lado):
            Rectangulo(color,x,y,nombre,lado,lado){}
        void imprimir(){
            cout<<"Es un Cuadrado"<<endl;
            Forma::imprimir();           
            cout<<"Lado: "<<ladoMayor<<endl;
        }
};
