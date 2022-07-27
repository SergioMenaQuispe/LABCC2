#include<iostream>

#include"AbstractFactory.h"
#include"Factorys.h"

void Cliente(const AbstractFactory& f) {
    const AbstractProductoA* producto_a = f.CrearProductoA();
    const AbstractProductoB* producto_b = f.CrearProductoB();
    std::cout << producto_b->Funcion1_B() << "\n";
    std::cout << producto_b->Funcion2_B(*producto_a) << std::endl;
    delete producto_a;
    delete producto_b;
}

int main() {
    std::cout << "Cliente: Tipo 1 ";

    CFactory1* f1 = new CFactory1();
    Cliente(*f1);
    delete f1;

    std::cout << std::endl;

    std::cout << "Cliente: Tipo 2 ";

    CFactory2* f2 = new CFactory2();
    Cliente(*f2);
    delete f2;

    return 0;
}