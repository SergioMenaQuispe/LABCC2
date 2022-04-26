// Sergio Mena Quispe
#include<iostream>
using namespace std;

bool esPrimo(int n){
    int divisores = 0;
    for(int i = 1; i <= n; i++)
        if(n % i == 0)
            divisores++;

    return (divisores == 2);

}
int main(){

    for(int i = 0; i < 50; i++)
        if(esPrimo(i))
            cout<<i<<endl;

    return 0;
}