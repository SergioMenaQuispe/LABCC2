#include"LibreriaFormas.h"
#include<vector>
#include<time.h>

int main(){

    srand(time(NULL));
    Forma *formas[10];
    char nombreFormas[10];

    int opc;
    double coordenadas[2];
    float dimensiones[2];
    const string color = "Rojo";

    for(int i = 0; i < 10; i++){
        opc = 1 + rand() % 4;
        coordenadas[0] = rand() * 10;
        coordenadas[1] = rand() * 10;

        dimensiones[0] = 1 + rand() % 9;
        dimensiones[1] = 1 + rand() % 7;
        switch (opc)
        {
            case 1:{
                formas[i] = new Rectangulo(color,coordenadas[0],coordenadas[1],'R',dimensiones[0]/(i+1),dimensiones[1]/(i+1));
                nombreFormas[i] = 'R';
            }break;
            case 2: {
                formas[i] = new Cuadrado(color,coordenadas[0],coordenadas[1],'S',dimensiones[0]/(i+1));
                nombreFormas[i] = 'S';
            }break;
            case 3: {
                formas[i] = new Elipse(color,coordenadas[0],coordenadas[1],'E',dimensiones[0]/(i+1),dimensiones[1]/(i+1));
                nombreFormas[i] = 'E';
            }break;
            case 4: {
                formas[i] = new Circulo(color,coordenadas[0],coordenadas[1],'C',dimensiones[0]/(i+1));
                nombreFormas[i] = 'C';
            }   
        }
    }

    double mayorArea = formas[0]->getArea();
    int index = 0;
    for(int i = 0; i < 10; i++){
        cout<<i<<":"<<endl;
        formas[i]->imprimir();
        cout<<"Area: "<<formas[i]->getArea()<<endl;
        cout<<endl;
        if(formas[i]->getArea() > mayorArea){
            mayorArea = formas[i]->getArea();
            index = i;
        }
    }

    cout<<"El elemento con mayor area es: "<<endl;
    formas[index]->imprimir();
    cout<<"Area: "<<formas[index]->getArea();

    for(int i = 0; i < 10; i++)
        delete formas[i];


    return 0;
}

