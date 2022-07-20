#ifndef CLIENTE_CODE
#define CLIENTE_CODE

#include<iostream>
#include"Director.h"
#include"BuilderEspecifico.h"
#include"IBuilder.h"

void ClienteCode(Director& director)
{
    BuilderEspecifico* builder = new BuilderEspecifico();

    director.set_builder(builder);
    std::cout << "Producto Basico:\n";
    director.BuildProductoMin();

    Producto1* p = builder->GetProducto();
    p->ListaComp();
    delete p;
    std::cout << "Producto Completo:\n";

    director.BuildProductoCompleto();
    p = builder->GetProducto();
    p->ListaComp();
    delete p;

    std::cout << "Producto basico:\n";
    builder->ProducirParteA();
    builder->ProducirParteC();
    p = builder->GetProducto();
    p->ListaComp();
    delete p;
    
    delete builder;
}


#endif