#include<iostream>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad[3],
            nacimiento[3],
            hoy[3];
    public:
        Persona(string nombre, int nacimiento[], int hoy[]){
            this->nombre = nombre;
            for(int i = 0; i < 3; i++){
                this->nacimiento[i] = nacimiento[i];
                this->hoy[i] = hoy[i];
            }
        }

        void findEdad(){
            int diaHoy = hoy[0], mesHoy = hoy[1], anioHoy = hoy[2];

            if(hoy[0] < nacimiento[0]){
                diaHoy += 0;
                mesHoy -= 1;
            }

            edad[0] = diaHoy - nacimiento[0];

            if(mesHoy < nacimiento[1]){
                mesHoy += 12;
                anioHoy -= 1;
            }

            edad[1] = mesHoy - nacimiento[1];

            edad[2] = anioHoy - nacimiento[2];
        }

        void getFechas(){
            cout<<"La fecha de nacimiento es:"<<endl;
            cout<<nacimiento[0]<<"/"<<nacimiento[1]<<"/"<<nacimiento[2]<<endl<<endl;
            cout<<"La fecha de hoy es:"<<endl;
            cout<<nacimiento[0]<<"/"<<nacimiento[1]<<"/"<<nacimiento[2]<<endl<<endl;
        }

        void getDatos(){
            cout<<"El nombre de la persona es: "<<nombre<<endl;
            cout<<"Su edad es: "<<endl;
            cout<<edad[2]<<" años, "<<edad[1]<<" meses, "<<edad[0]<<" dias"<<endl;
        }
};