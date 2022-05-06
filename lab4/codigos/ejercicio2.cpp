#include<iostream>
using namespace std;

bool buscar(int arr[], int n, int x){
    for(int i = 0; i < x; i++)
        if(arr[i] == x)
            return true;
    return false;
}

int main(){

    int n = 8, x;
    int arr[] = {1,2,3,4,5,6,7,8};
    cout<<"Digite elemento a buscar: ";
    cin>>x;
    cout<<buscar(arr,n,x)<<endl;


    return 0;
}