#include"AbstractFactory.h"
#include "ProductsFromA.h"
#include "ProductsFromB.h"

#ifndef FACTORY_1
#define FACTORY_1

class CFactory1 : public AbstractFactory {
public:
    AbstractProductoA* CrearProductoA() const override {
        return new CProductoA1();
    }
    
    AbstractProductoB* CrearProductoB() const override {
        return new CProductoB1();
    }
};

#endif

#ifndef FACTORY_2
#define FACTORY_2

class CFactory2 : public AbstractFactory {
public:
    AbstractProductoA* CrearProductoA() const override {
        return new CProductoA2();
    }

    AbstractProductoB* CrearProductoB() const override {
        return new CProductoB2();
    }
};

#endif