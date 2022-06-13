#include"Lista.h"
#include"time.h"

void ascendingQuickSort(Lista &lista, int first, int last){
    int i, j , p;
    i = first;
    j = last;
    p = lista.datoAt((first + last) / 2);

    do{
        while (lista.datoAt(i) < p ) i++;
        while (p < lista.datoAt(j)) j--;

        if(i <= j){
            lista.swap(i,j);
            i++;
            j--;
        }
        
    }while(i <= j);

    if(first < j) ascendingQuickSort(lista,first,j);
    if(i < last) ascendingQuickSort(lista,i,last);
}

void descendingQuickSort(Lista &lista, int first, int last){
    int i, j , p;
    i = first;
    j = last;
    p = lista.datoAt((first + last) / 2);

    do{
        while (lista.datoAt(i) > p ) i++;
        while (p > lista.datoAt(j)) j--;

        if(i <= j){
            lista.swap(i,j);
            i++;
            j--;
        }
        
    }while(i <= j);

    if(first < j) descendingQuickSort(lista,first,j);
    if(i < last) descendingQuickSort(lista,i,last);
}

void menu(){
    cout<<"------MENU------"<<endl;
    cout<<"1. Agregar al final"<<endl;
    cout<<"2. Agregar al inicio"<<endl;
    cout<<"3. Agregar en una posición"<<endl;
    cout<<"4. Eliminar al final"<<endl;
    cout<<"5. Eliminar al inicio"<<endl;
    cout<<"6. Eliminar en una posición"<<endl;
    cout<<"7. Insertar 'n' elementos"<<endl;
    cout<<"8. Ordenar ascendentemente"<<endl;
    cout<<"9. Ordenar descententemente"<<endl;
    cout<<"10. Prueba de 10 000 elementos aleatorios"<<endl;
    cout<<"11. Salir"<<endl;
}


int main(){

    time_t start, end;
    Lista l;
    srand(time(NULL));

    int opc, dato, index;
    do{
        menu();
        cout<<"Digite su opcion: ";
        cin>>opc;

        switch (opc)
        {
        case 1: {
            cout<<"Digite el dato a agregar: ";
            cin>>dato;
            l.pushBack(dato);
        }break;
        case 2: {
            cout<<"Digite el dato a agregar: ";
            cin>>dato;
            l.pushForward(dato);
        }break;
        case 3: {
            cout<<"Digite el dato a agregar: ";
            cin>>dato;
            cout<<"Digite el indice: ";
            cin>>index;
            l.pushAt(dato,index);
        }break;
        case 4: {
            l.popBack();
            cout<<"El último elemento fue eliminado"<<endl;
        }break;
        case 5: {
            l.popForward();
            cout<<"El primer elemento fue eliminado"<<endl;
        }break;
        case 6: {
            cout<<"Digite el indice: ";
            cin>>index;
            l.popAt(index);
            cout<<"El elemento en la posicion "<<index<<" fue eliminado"<<endl;
        }break;
        case 7: {
            cout<<"Cuantos numeros desea ingresar? ";
            cin>>index;
            dato = l.length();
            if(dato > 0)
                dato = l.datoAt(l.length() - 1);
            for(int i = 0; i < index; i++)
                l.pushBack(++dato);
        }break;
        case 8: {
            time(&start);
            ascendingQuickSort(l,0,l.length()-1);
            time(&end);
            double time_taken = double(end - start);
            cout<<"Tiempo: "<<time_taken<<endl;
        }break;
        case 9: {
            time(&start);
            descendingQuickSort(l,0,l.length()-1);
            time(&end);
            double time_taken = double(end - start);
            cout<<"Tiempo: "<<time_taken<<endl;
        }break;
        case 10: {
            for(int i = 0; i < 10000; i++){
                dato = rand() % 101;
                l.pushBack(dato);
            }           
        }
        case 11: break;

        default:
            cout<<"No es una opcion valida"<<endl;
            break;
        }

        l.display();

    }while(opc != 11);
    

    return 0;
}
