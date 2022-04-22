#include <iostream>
using namespace std;

int main(){

    int num, sum = 0;
    for(int i = 0; i < 10; i++)
    {
        cout<<"Digite numero "<<i+1<<": ";
        cin>>num;
        if(num < 0)
            sum += num;
    }

    cout<<"La suma total es: "<<sum<<endl;

    return 0;
}