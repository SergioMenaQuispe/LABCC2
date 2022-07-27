#ifndef GUI_FACTORY
#define GUI_FACTORY

#include<iostream>
#include"WinFactory.h"
#include"MacFactory.h"
#include"LinuxFactory.h"

class GUIFactory
{
public:
    virtual WinFactory* CrearControlW() const = 0;
    virtual MacFactory* CrearControlM() const = 0;
    virtual LinuxFactory* CrearControlL() const = 0;
};

#endif


