#ifndef LINUX_FACTORY
#define LINUX_FACTORY

#include"MacFactory.h"

class LinuxFactory
{
public:
    virtual ~LinuxFactory(){}
    virtual void Draw() const = 0;
    virtual void draw(const MacFactory& colaborador) const = 0;
};

#endif