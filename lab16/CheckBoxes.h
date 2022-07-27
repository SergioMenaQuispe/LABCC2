#include<iostream>

#include"WinFactory.h"
#include"MacFactory.h"
#include"LinuxFactory.h"

#ifndef WIN_CHECKBOX
#define WIN_CHECKBOX

class WinCheckbox : public WinFactory {
public:
    void Draw() const override {
        std::cout<<"Windows Checkbox"<<std::endl;
    }
};

#endif

#ifndef MAC_CHECKBOX
#define MAC_CHECKBOX

class MacCheckbox : public MacFactory {
public:
    void Draw() const override {
        std::cout<<"Mac Checkbox"<<std::endl;
    }
    
    void draw(const WinFactory& colaborador) const override {
        std::cout<<"Mac Checkbox with: ";
        colaborador.Draw();
    }
};

#endif

#ifndef LINUX_CHECKBOX
#define LINUX_CHECKBOX

class LinuxCheckbox : public LinuxFactory {
public:
    void Draw() const override {
        std::cout<<"Linux Checkbox"<<std::endl;
    }

    void draw(const MacFactory& colaborador) const override {
        std::cout<<"Linux Checkbox with: ";
        colaborador.Draw();
    }
};

#endif