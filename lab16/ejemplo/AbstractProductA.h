#ifndef PRODUCT_A
#define PRODUCT_A

#include<iostream>

class AbstractProductoA {
public:
    virtual ~AbstractProductoA() {};
    virtual std::string Funcion1_A() const = 0;
};

#endif