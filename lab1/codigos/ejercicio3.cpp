#include <iostream>
#include <cstring>
using namespace std;

void convertirHora(int arr[],string hora){
    arr[0] = (hora[0] - 48)*10 + hora[1] - 48;
    arr[1] = (hora[3] - 48)*10 + hora[4] - 48;
}

void sumarMinutos(int arr[], int minutos, string &mid){
    int h = arr[0],
        m = arr[1];

    while(minutos > 0){
        m += 1;
        if(m == 60)
        {
            m = 0;
            h += 1;
        }

        if(h == 24)
            h = 0;

        minutos--;
    }

    if(h >= 0 && h < 12)
        mid = "AM";
    else
        mid = "PM";

    arr[0]  = h;
    arr[1]  = m;
}

int main(){

    // ejemplo
    //string hora = "11:05";

    string hora, mid;
    unsigned int minutos;
    cout<<"Digite la hora en formato HH:MM: ";cin>>hora;
    cout<<"Minutos a sumar: ";cin>>minutos;
 
    int arr[2];
    convertirHora(arr,hora);
    sumarMinutos(arr,minutos,mid);
    

    string h = arr[0] >= 10 ? to_string(arr[0]) : "0" + to_string(arr[0]);
    string m = arr[1] >= 10 ? to_string(arr[1]) : "0" + to_string(arr[1]);
    cout<<h<<":"<<m<<" - "<<mid<<endl;


    return 0;
}