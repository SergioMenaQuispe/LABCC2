#ifndef BUILDER_ESPECIFICO
#define BUILDER_ESPECIFICO

#include"Producto1.h"
#include"IBuilder.h"

class BuilderEspecifico : public IBuilder {
private:
    Producto1* product;
public:
    BuilderEspecifico() {
        this->Reset();
    }
    ~BuilderEspecifico() {
        delete product;
    }
    void Reset() {
        this->product = new Producto1();
    }
    void ProducirParteA()const override {
        this->product->componentes.push_back("ParteA1");
    }
    void ProducirParteB()const override {
        this->product->componentes.push_back("ParteB1");
    }
    void ProducirParteC()const override {
        this->product->componentes.push_back("ParteC1");
    }

    Producto1* GetProducto() {
        Producto1* resultado = this->product;
        this->Reset();
        return resultado;
    }
};

#endif