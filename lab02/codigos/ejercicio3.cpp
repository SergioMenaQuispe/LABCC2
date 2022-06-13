// Sergio Mena Quispe
#include<iostream>
using namespace std;

bool esMultiploDe5(int a){
    return (a%5 == 0);
}

int main(){

    for(int i = 1; i <= 100; i++)
        if(esMultiploDe5(i))
            cout<<i<<endl;

    return 0;
}