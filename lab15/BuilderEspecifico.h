#ifndef BUILDER_ESPECIFICO
#define BUILDER_ESPECIFICO

#include"Producto.h"
#include"Builder.h"

class BuilderEspecifico : public Builder
{
private:
    Producto * product;
public:
    BuilderEspecifico(){
        this->Reset();
    }

    ~BuilderEspecifico(){
        delete product;
    }

    void Reset(){
        this->product = new Producto();
    }

    void ProducirPuertas(int color) const override {
        this->product->componentes.push_back("Puertas -> " + colores[color]);
    }
    void ProducirLlantas(int color) const override {
        this->product->componentes.push_back("Llantes -> " + colores[color]);
    }
    void ProducirTimon(int color)  const override {
        this->product->componentes.push_back("Timon -> " + colores[color]);
    }
    void ProducirAsientos(int color) const override {
        this->product->componentes.push_back("Asientos -> " + colores[color]);
    }
    void ProducirMotor(int color) const override {
        this->product->componentes.push_back("Motor -> " + colores[color]);
    }
    void ProducirEspejos(int color) const override {
        this->product->componentes.push_back("Espejos -> " + colores[color]);
    }
    void ProducirVidrios(int color) const override {
        this->product->componentes.push_back("Vidrios -> " + colores[color]);
    }

    Producto * getProducto(){
        Producto * resultado = this->product;
        this->Reset();
        return resultado;
    }
};

#endif