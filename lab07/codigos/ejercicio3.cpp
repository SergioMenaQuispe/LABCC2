#include<iostream>
using namespace std;

class ProductoBancario{
    protected:
        string cliente;
        double saldo;
        int numProductos;
    public:
        ProductoBancario(){}
        ProductoBancario(string cliente, double saldo, int numProductos){
            this->cliente = cliente;
            this->saldo = saldo;
            this->numProductos = numProductos;
        }
        ~ProductoBancario(){}
        void imprimir(){
            cout<<"Cliente: "<<cliente<<endl;
            cout<<"Saldo: "<<saldo<<endl;
            cout<<"Productos: "<<numProductos<<endl;
        }
};

class Cuenta : public ProductoBancario{
    public:
        Cuenta(){}
        Cuenta(string cliente, double saldo, int numProductos):
            ProductoBancario(cliente,saldo,numProductos){}
        ~Cuenta(){}
        //void imprimir(){}
};

class CuentaJoven : private Cuenta{
    public:
        CuentaJoven(string cliente,double saldo, int numProductos):
            Cuenta(cliente,saldo,numProductos){}
        ~CuentaJoven(){}
        //void imprimir(){}
};


class Prestamo : protected ProductoBancario{
    public:
        Prestamo(){}
        Prestamo(string cliente, double saldo, int numProductos):
            ProductoBancario(cliente,saldo,numProductos){}
        ~Prestamo(){}
        //void imprimir(){}
};

class Hipoteca : public Prestamo{
    public:
        Hipoteca(string cliente, double saldo, int numProductos):
            Prestamo(cliente,saldo,numProductos){}
        ~Hipoteca(){}
        //void imprimir(){}
};

int main(){

    ProductoBancario p("Sergio",12.45,3);
    p.imprimir();
    
    CuentaJoven cj("Sergio",12.45,3);
    cj.imprimir();

    Hipoteca h("Sergio",12.45,3);
    h.imprimir();

    return 0;
}