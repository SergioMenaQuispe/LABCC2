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

    int arr[5][3];

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 3; j++){
            cout<<"Digite valor en la pos ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    
    for(int i = 0; i < 5; i++)
        if(i % 2 == 0)
            cout<<"Suma en fila "<<i<<": "<<suma(arr,i)<<endl;

    return 0;
}