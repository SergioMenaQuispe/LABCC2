#include<iostream>
using namespace std;

#include"GUIFactory.h"
#include"Factorys.h"

void Application(const GUIFactory& f, int os){

    const WinFactory* windows = f.CrearControlW();
    const MacFactory* mac = f.CrearControlM();
    const LinuxFactory* linx = f.CrearControlL();


    switch (os)
    {
    case 1:
        windows->Draw();
    break;
    case 2:
        mac->Draw();
        mac->draw(*windows);
    break;
    case 3:
        linx->Draw();
        linx->draw(*mac);
    break;
    default:
        break;
    }
    
    delete windows;
    delete mac;
    delete linx;
}

int main(){

    cout<<"Cliente: botones"<<endl;
    Button* f1 = new Button;
    Application(*f1,1);
    delete f1;

    cout<<endl;
    cout<<"Cliente: Checkboxs"<<endl;
    CheckBox* f2 = new CheckBox;
    Application(*f2,2);
    delete f2;

    return 0;
}