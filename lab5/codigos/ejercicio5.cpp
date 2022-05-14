#include<iostream>
using namespace std;

int getLenght(char *ptr){
    int count = 0;
    while(*ptr != '\0'){
        count++;
        ptr++;
    }
    return count;
}

void concatenacion(char *a, char *b){
    char *aux = a;

    int i = 0;

    aux ++;
    while (*aux != '\0') 
        aux++;

    char *antAux = aux;
    int lenght = getLenght(b);
    while (i < lenght) {
        aux++;
        *antAux = *b;
        b++;
        antAux++;
        i++;
    }

    *antAux = '\0';

    cout<<a<<endl;

}

int main(){

    char cad1[] = "Mundo",
        cad2[] = "Hola";
    char *ptr1 = cad1,
        *ptr2 = cad2;

    concatenacion(ptr2, ptr1);

    return 0;
}