#include<iostream>
using namespace std;


struct alumno{
    string nombre;
    char grupo;
    float notas[5];
};

typedef alumno Alumno;



void notaFinal(Alumno & al, int pesos[]){
    float sum = 0;
    float ptg;
    for(int i = 0; i < 4; i++){
        ptg = al.notas[i] * (pesos[i]*1.0 / 100);
        sum += ptg;
    }
    al.notas[4] = sum;
}

void evaluarNota(Alumno &al, string cual, int index){
    int nota;
    do{
        cout<<"Nota "<<cual<<": ";cin>>nota;
        if(!(nota <= 20 && nota >= 0))
            cout<<"Digite un valor correcto entre 0 y 20"<<endl;
    }while(!(nota <= 20 && nota >= 0));

    al.notas[index] = nota;
}

void ingresarDato(Alumno alumnos[], int size, int pesos[]){
    for(int i = 0; i < size; i++){
        cout<<"Alumno "<<i+1<<endl;
        cout<<"Digite su nombre: ";
        cin>>alumnos[i].nombre;
        cout<<"Digite su grupo: ";
        cin>>alumnos[i].grupo;
        evaluarNota(alumnos[i],"Primera fase",0);
        evaluarNota(alumnos[i],"Segunda fase",1);
        evaluarNota(alumnos[i],"Tercera fase",2);
        evaluarNota(alumnos[i],"Proyecto final",3);
        notaFinal(alumnos[i],pesos);
        cout<<endl;
    }
}


ostream& operator<<(ostream &output, const Alumno al){
    output << "Alumno: " << al.nombre << ", Grupo: " << al.grupo << "\n";
    output << "Notas: ";
    for(int i = 0; i < 4; i++)
        output << al.notas[i] << "\t";
    output << "\nNota final: " << al.notas[4] << "\n";

    return output;
}


int main(){


    int n ;
    cout<<"Cuantos alumnos desea registrar: ";
    cin>>n;
    Alumno alumnos[n];
    int pesos[] = {15,20,25,40};

    ingresarDato(alumnos,n,pesos);

    for(int i = 0; i < n; i++)
        cout<<alumnos[i]<<endl;




    return 0;
}