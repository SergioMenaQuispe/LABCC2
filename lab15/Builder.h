#ifndef BUILDER
#define BUILDER

class Builder
{
protected:
    std::string colores[6] = {"rojo","amarillo","azul","verde","morado","naranja"};
public:
    virtual ~Builder(){}
    virtual void ProducirPuertas(int color) const = 0;
    virtual void ProducirLlantas(int color) const = 0;
    virtual void ProducirTimon(int color) const = 0;
    virtual void ProducirAsientos(int color) const = 0;
    virtual void ProducirMotor(int color) const = 0;
    virtual void ProducirEspejos(int color) const = 0;
    virtual void ProducirVidrios(int color) const = 0;
};

#endif