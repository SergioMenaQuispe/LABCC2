#ifndef PRODUCT_B
#define PRODUCT_B

#include"AbstractProductA.h"
#include<iostream>

class AbstractProductoB {
    public:
    virtual ~AbstractProductoB() {};
    virtual std::string Funcion1_B() const = 0;
    virtual std::string Funcion2_B(const AbstractProductoA& colaborador) const = 0;
};

#endif