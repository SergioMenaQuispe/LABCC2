#include<iostream>
using namespace std;

template<typename T>
T maxValor(T arr[], int length){

    T max = arr[0];
    for(int i = 1; i < length; i++){
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}


template<typename T>
T minValor(T arr[], int length){

    T min = arr[0];
    for(int i = 1; i < length; i++){
        if(arr[i] < min)
            min = arr[i];
    }

    return min;
}


int main(){
    int ArrayEntero [5] = {10,7,2, 8, 6};
    float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};

    cout<<"ArrayEntero:"<<endl;
    cout<<"maximo valor: "<<maxValor(ArrayEntero,5)<<endl;
    cout<<"minimo valor: "<<minValor(ArrayEntero,5)<<endl;
    
    cout<<"ArrayFloat:"<<endl;
    cout<<"maximo valor: "<<maxValor(ArrayFloat,5)<<endl;
    cout<<"minimo valor: "<<minValor(ArrayFloat,5)<<endl;

    return 0;
}