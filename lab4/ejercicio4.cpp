#include<iostream>
using namespace std;

bool esPrimo(int n){
    int count = 0;
    for(int i = 1; i <= n; i++)
        if(n % i == 0)
            count++;
    return (count == 2);
}

int getCantNumerosPrimos(int limInf, int limSup){
    int count = 0;
    for(int i = limInf; i <= limSup; i++){
        if(esPrimo(i))
            count++;
    }
    return count;
}

int main(){

    int cant = getCantNumerosPrimos(0,100);
    int arr[cant];

    for(int i = 0, j = 0; i <= 100; i++){
        if(esPrimo(i)){
            arr[j] = i;
            j++;
        }
    }

    for(int i = 0; i < cant; i++)
        cout<<arr[i]<<endl;

    return 0;
}