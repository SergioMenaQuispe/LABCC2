#include<iostream>
using namespace std;

int suma(int arr[][3], int index){
    int sum = 0;
    for(int i = 0; i < 3; i++){
        sum += arr[index][i];
    }
    return sum;
}

int main(){

    int arr[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            cout<<"Digite el valor de la pos ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }

    int sumas[3];
    for(int i = 0; i < 3; i++)
        sumas[i] = suma(arr,i);

    int mayor = sumas[0], mayorindex;
    for(int i = 0; i < 3; i++){
        if(sumas[i] >= mayor){
            mayor = sumas[i];
            mayorindex = i;
        }
    }

    cout<<"La fila con mayor sumatoria es "<<mayorindex<<": "<<mayor<<endl;


    return 0;
}