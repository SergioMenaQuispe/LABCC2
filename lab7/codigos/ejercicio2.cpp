#include<iostream>
using namespace std;

class Color{
    public:
        int r, g, b;
};

class Material{
    public:
        string nombreMaterial;
};

class Objeto : public Color, public Material{
    string nombreObjeto;
    public:
        Objeto(string nombre,string material, int r, int g, int b){
            this->nombreObjeto = nombre;
            this->nombreMaterial = material;
            this->r = r;
            this->g = g;
            this->b = b;
        }
        void getDatos(){
            cout<<nombreObjeto<<" de "<<nombreMaterial<<" de color "<<r<<"    "<<g<<"     "<<b<<endl;
        }
};

int main(){

    Objeto o("Mesa","Plastico",213,12,43);
    o.getDatos();

    return 0;
}