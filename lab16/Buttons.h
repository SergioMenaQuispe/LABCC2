#include<iostream>

#include"WinFactory.h"
#include"MacFactory.h"
#include"LinuxFactory.h"

#ifndef WIN_BUTTON
#define WIN_BUTTON

class WinButton : public WinFactory {
public:
    void Draw() const override {
        std::cout<<"Windows Button"<<std::endl;
    }
};

#endif

#ifndef MAC_BUTTON
#define MAC_BUTTON

class MacButton : public MacFactory {
public:
    void Draw() const override {
        std::cout<<"Mac Button"<<std::endl;
    }
    
    void draw(const WinFactory& colaborador) const override {
        std::cout<<"Mac Button with: ";
        colaborador.Draw();
    }
};

#endif

#ifndef LINUX_BUTTON
#define LINUX_BUTTON

class LinuxButton : public LinuxFactory {
public:
    void Draw() const override {
        std::cout<<"Linux Button"<<std::endl;
    }

    void draw(const MacFactory& colaborador) const override {
        std::cout<<"Linux Button with: ";
        colaborador.Draw();
    }
};

#endif