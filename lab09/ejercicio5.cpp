#include<iostream>
using namespace std;

template<typename T>
void ordenarElementosAscendentemente(T *arr, int begin,int end){
    T aux;
    for(int i = begin + 1; i <= end; i++)
        for(int j = begin; j <= end; j++)
            if(arr[j] > arr[i]){
                aux = arr[i];
                arr[i] = arr[j],
                arr[j] = aux;
            }
}


template<typename T>
void ordenarElementosDescendentemente(T *arr, int begin,int end){
    T aux;
    for(int i = begin + 1; i <= end; i++)
        for(int j = begin; j <= end; j++)
            if(arr[j] < arr[i]){
                aux = arr[i];
                arr[i] = arr[j],
                arr[j] = aux;
            }
}

template<typename T>
void displayArray(T *arr, int begin, int end){
    for(int i = begin; i <= end; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){

    int ArrayEntero[9] = {5,7,2,8,6,1,3,4,9};
    ordenarElementosAscendentemente(ArrayEntero,0,8);
    displayArray(ArrayEntero,0,8);
    ordenarElementosDescendentemente(ArrayEntero,0,8);
    displayArray(ArrayEntero,0,8);
    
    float ArrayFloat [5] = {10.1, 8.4, 3.6, 4.4, 11.2};
    ordenarElementosAscendentemente(ArrayFloat,0,4);
    displayArray(ArrayFloat,0,4);
    ordenarElementosDescendentemente(ArrayFloat,0,4);
    displayArray(ArrayFloat,0,4);

    return 0;
}