#include"GUIFactory.h"
#include"Buttons.h"
#include"CheckBoxes.h"

#ifndef BUTTON
#define BUTTON

class Button : public GUIFactory {
public:
    WinFactory* CrearControlW() const override {
        return new WinButton();
    }

    MacFactory* CrearControlM() const override {
        return new MacButton();
    }

    LinuxFactory* CrearControlL() const override {
        return new LinuxButton();
    }
};

#endif


#ifndef CHECKBOX
#define CHECKBOX


class CheckBox : public GUIFactory {
public:
    WinFactory* CrearControlW() const override {
        return new WinCheckbox();
    }

    MacFactory* CrearControlM() const override {
        return new MacCheckbox();
    }

    LinuxFactory* CrearControlL() const override {
        return new LinuxCheckbox();
    }
};

#endif