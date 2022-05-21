#include"Forma.h"

class Rectangulo : public Forma{
    protected:
        float ladoMayor, ladoMenor;
    public:
        Rectangulo():Forma(){}
        Rectangulo(string color, double x, double y, char nombre, float ladoMayor, float ladoMenor):
            Forma(color,x,y,nombre){
                this->ladoMayor = ladoMayor;
                this->ladoMenor = ladoMenor;
            }

        ~Rectangulo(){
            delete centro;
        }
        void imprimir(){
            cout<<"Es un rectangulo"<<endl;
            Forma::imprimir();           
            cout<<"Lado mayor: "<<ladoMayor<<endl;
            cout<<"Lado menor: "<<ladoMenor<<endl;
        }
        float getArea(){
            return ladoMayor * ladoMenor;
        }
        float getPerimetro(){
            return (ladoMayor*2) + (ladoMenor*2);
        }
        void escala(float factor){
            ladoMayor *= factor;
            ladoMenor *= factor;
        }
};