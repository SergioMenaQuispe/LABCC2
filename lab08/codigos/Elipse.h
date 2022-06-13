#include<cmath>
#include"Cuadrado.h"
class Elipse : public Forma{
    protected:
        float radioMayor, radioMenor;
    public:
        Elipse():Forma(){}
        Elipse(string color, double x, double y, char nombre, float radioMayor, float radioMenor):
            Forma(color,x,y,nombre){
                this->radioMayor = radioMayor;
                this->radioMenor = radioMenor;
            }
        ~Elipse(){
            delete centro;
        }
        void imprimir(){
            cout<<"Es un Elipse"<<endl;
            Forma::imprimir();           
            cout<<"Radio mayor: "<<radioMayor<<endl;
            cout<<"Radio menor: "<<radioMenor<<endl;
        }
        float getArea(){
            return M_PI*radioMayor*radioMenor;
        }
};
