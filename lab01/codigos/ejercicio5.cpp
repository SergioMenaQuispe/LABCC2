#include<iostream>
#include <cstring>
#include "math.h"

using namespace std;

int main(){

    string numStr;
    cout<<"Numero float: ";
    cin>>numStr;

    float num = stof(numStr);

    cout<<round(num)<<endl;

    return 0;
}