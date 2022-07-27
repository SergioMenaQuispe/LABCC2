#ifndef FACTORY
#define FACTORY

#include"AbstractProductA.h"
#include"AbstractProductB.h"

class AbstractFactory {
public:
    virtual AbstractProductoA* CrearProductoA() const = 0;
    virtual AbstractProductoB* CrearProductoB() const = 0;
};

#endif