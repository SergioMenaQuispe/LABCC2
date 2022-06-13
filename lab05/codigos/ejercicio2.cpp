#include <cstdlib>
#include<iostream>
#include<random>
using namespace std;

float *crearVector(int n){
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<>dist(1,10);

    float *vector = new float[n];
    for(int i = 0; i < n; i++)
        vector[i] = dist(gen);
    return vector;
}

double productoPunto(float *v1, float *v2, int n){
    float *aux = new float[n];
    for(int i = 0; i < n; i++)
        aux[i] = v1[i] * v2[i];
    
    double sum = 0;
    for(int i = 0; i < n; i++)
        sum += aux[i];

    delete [] aux;

    return sum;
}

void limpiar(float *&v1, float *&v2){
    delete [] v1;
    delete [] v2;
}

int main(){


    for(int i = 0; i < 1000; i++)
    {
        float *v1 = crearVector(5),
            *v2 = crearVector(5);
        cout<<productoPunto(v1,v2, 5)<<endl;
        limpiar(v1,v2);
    }

    return 0;
}