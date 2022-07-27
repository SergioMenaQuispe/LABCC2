#include"AbstractProductA.h"

#ifndef PRODUCT_A_1
#define PRODUCT_A_1

class CProductoA1 : public AbstractProductoA {
    public:
    std::string Funcion1_A() const override {
        return "Producto A1.";
    }
};


#endif


#ifndef PRODUCT_A_2
#define PRODUCT_A_2

class CProductoA2 : public AbstractProductoA {
    std::string Funcion1_A() const override {
        return "Producto A2.";
    }
};

#endif