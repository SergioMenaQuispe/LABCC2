#include<iostream>
using namespace std;

template<typename T1, typename T2>
void makeEmail(T1 a, T2 b){
    if(typeid(a).name() == typeid('A').name()){
        cout<<a<<"/"<<b<<"@unsa.edu.pe"<<endl;
    }else{
        cout<<b<<"/"<<a<<"@unsa.edu.pe"<<endl;
    }
}

int main(){

    makeEmail("sergio",'S');
    makeEmail('S',"sergio");
    makeEmail('G',"George");
    makeEmail("George",'G');
    makeEmail("Allison",'A');


    return 0;
}