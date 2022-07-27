#include"AbstractProductB.h"

#ifndef PRODUCT_B_1
#define PRODUCT_B_1

class CProductoB1 : public AbstractProductoB {
public:
    std::string Funcion1_B() const override {
        return "Producto B1.";
    }

    std::string Funcion2_B(const AbstractProductoA& colaborador) const override {
        const std::string result = colaborador.Funcion1_A();
        return "B1 con ayuda de " + result;
    }
};

#endif


#ifndef PRODUCT_B_2
#define PRODUCT_B_2

class CProductoB2 : public AbstractProductoB {
public:
    std::string Funcion1_B() const override {
        return "Producto B2.";
    }

    std::string Funcion2_B(const AbstractProductoA& colaborador) const override {
        const std::string result = colaborador.Funcion1_A();
        return "B2 con ayuda de " + result;
    }
};

#endif