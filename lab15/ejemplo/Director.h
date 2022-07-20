#ifndef DIRECTOR
#define DIRECTOR

#include"IBuilder.h"

class Director {
private:
    IBuilder* builder;
public:
    void set_builder(IBuilder* builder) {
        this->builder = builder;
    }
    void BuildProductoMin() {
        this->builder->ProducirParteA();
    }
    void BuildProductoCompleto() {
        this->builder->ProducirParteA();
        this->builder->ProducirParteB();
        this->builder->ProducirParteC();
    }
};

#endif