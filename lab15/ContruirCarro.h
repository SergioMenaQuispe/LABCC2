#include<iostream>
#include"Director.h"
#include"BuilderEspecifico.h"
#include"Builder.h"

using namespace std;

void menu();
void paletaColores();

void ConstruiCarro(Director & director){
    
    BuilderEspecifico * builder  = new BuilderEspecifico();
    director.set_builder(builder);

    Producto * p;
    int opc, color;
    char sn;

    string componentes[7] = {"Motor","Puertas","Llantas","Timon","Asientos","Espejos","Vidrios"};
    int colores[7];
    do
    {
        menu();
        cout<<"Digite su opción: ";
        cin>>opc;

        switch (opc)
        {
        case 1:
            cout<<"Carro básico"<<endl;
            paletaColores();
            cout<<"Digite color: ";
            cin>>color;
            while (!(color > 0 && color <= 6))
            {   
                cout<<"Digite un color dentro de las opciones: ";
                cin>>color;
            }
            director.BuilProductoMin(color - 1);
            p = builder->getProducto();
            p->ListaComp();
            delete p;
        break;
        case 2:
            for(int i = 0; i < 7; i++){
                cout<<i+1<<". "<<componentes[i]<<endl;
                paletaColores();
                cout<<"Color: ";cin>>color;
                while (!(color > 0 && color <= 6))
                {   
                    cout<<"Digite un color dentro de las opciones: ";
                    cin>>color;
                }
                colores[i] = color - 1;
            }
            
            director.BuildProductoCompleto(
                colores[0],
                colores[1],
                colores[2],
                colores[3],
                colores[4],
                colores[5],
                colores[6]
            );
            p = builder->getProducto();
            p->ListaComp();
            delete p;
        break;
        case 3:
            for(int i = 0; i < 7; i++){
                cout<<i+1<<". "<<componentes[i]<<endl;
                cout<<"Desea agregarlo a la lista de partes? (s/n) ";
                cin>>sn;
                if(sn == 's' || sn == 'S'){
                    paletaColores();
                    cout<<"Color: ";cin>>color;
                    while (!(color > 0 && color <= 6))
                    {   
                        cout<<"Digite un color dentro de las opciones: ";
                        cin>>color;
                    }
                    colores[i] = color - 1;
                }else{
                    colores[i] = -1;
                }
            }

            if(colores[0] != -1) builder->ProducirMotor(colores[0]);
            if(colores[1] != -1) builder->ProducirPuertas(colores[1]);
            if(colores[2] != -1) builder->ProducirLlantas(colores[2]);
            if(colores[3] != -1) builder->ProducirTimon(colores[3]);
            if(colores[4] != -1) builder->ProducirAsientos(colores[4]);
            if(colores[5] != -1) builder->ProducirEspejos(colores[5]);
            if(colores[6] != -1) builder->ProducirVidrios(colores[6]);


            p = builder->getProducto();
            p->ListaComp();
            delete p;

        break;
        case 4:
        break;
        default: cout<< "No es una opcion valida"<<endl;
        break;
        }
    } while (opc != 4);
    

    delete builder;
}

void menu(){
    cout<<"-------MENU-------"<<endl;
    cout<<"1. Construir carro basico (solo motor)"<<endl;
    cout<<"2. Construir carro completo"<<endl;
    cout<<"3. Elegir partes"<<endl;
    cout<<"4. Salir"<<endl;
}

void paletaColores(){
    cout<<"Colores : 1. rojo, 2. amarillo, 3. azul, 4. verde, 5. morado, 6 naranja"<<endl;
}

void listaComponentes(){
    cout<<"Componentes: 1. motor, 2. puertas, 3. llantas, 4. timon, 5. asientos, 6. espejos, 7. vidrios "<<endl;
}