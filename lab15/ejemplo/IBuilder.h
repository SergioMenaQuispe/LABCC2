#ifndef I_BUILDER
#define I_BUILDER

class IBuilder
{
public:
    virtual ~IBuilder(){}
    virtual void ProducirParteA() const = 0;
    virtual void ProducirParteB() const = 0;
    virtual void ProducirParteC() const = 0;
};

#endif
