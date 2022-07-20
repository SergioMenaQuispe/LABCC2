#ifndef DIRECTOR
#define DIRECTOR

#include"Builder.h"
#include<iostream>

class Director
{
private:
    Builder * builder;
public:
    void set_builder(Builder * builder){
        this->builder = builder;
    }

    void BuilProductoMin(int color){
        this->builder->ProducirMotor(color);
    }

    void BuildProductoCompleto(
        int color_1,
        int color_2,
        int color_3,
        int color_4,
        int color_5,
        int color_6,
        int color_7
    ){
        this->builder->ProducirMotor(color_1);
        this->builder->ProducirPuertas(color_2);
        this->builder->ProducirLlantas(color_3);
        this->builder->ProducirTimon(color_4);
        this->builder->ProducirAsientos(color_5);
        this->builder->ProducirEspejos(color_6);
        this->builder->ProducirVidrios(color_7);
    }
    
};

#endif