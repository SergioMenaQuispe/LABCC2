#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<string> arr;

    string a = "adios";
    string b[2] = {"aaa","bbb"};
    arr.push_back("Hola" + b[0]);

    cout<<*arr.begin();

    return 0;
}