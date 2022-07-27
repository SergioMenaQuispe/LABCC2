#ifndef MAC_FACTORY
#define MAC_FACTORY

#include"WinFactory.h"

class MacFactory
{
public:
    virtual ~MacFactory(){}
    virtual void Draw() const = 0;
    virtual void draw(const WinFactory& colaborador) const = 0;
};


#endif