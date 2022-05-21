#include<iostream>
#include"Punto.h"

using namespace std;

class Forma{
    protected:
        string color;
        Punto * centro;
        char nombre;
    public:
        Forma(){
            centro = new Punto;
        }
        Forma(string color, double x, double y, char nombre){
            this->color = color;
            centro = new Punto(x,y);
            this->nombre = nombre;
        }
        ~Forma(){
            delete centro;
        }

        virtual void imprimir(){
            cout<<"Esto es una forma: "<<endl;
            cout<<"De color: "<<color<<endl;
            cout<<"Su centro se encuentra en x:"<<centro->getX()<<" y: "<<centro->getY()<<endl;
            cout<<"Su nombre es: "<<nombre<<endl;
        }

        string getColor(){return color;}
        void setColor(string color){this->color = color;}
        void moverCentro(double x, double y){centro->setCoordenada(x,y);}

        virtual float getArea(){
            cout<<"No posee Area"<<endl;
            return 0;
        }
        virtual float getPerimetro(){
            cout<<"No posse Perimetro"<<endl;
            return 0;
        }
        virtual void escala(float){}
};