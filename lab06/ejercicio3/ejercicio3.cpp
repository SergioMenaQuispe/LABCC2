#include "Persona.h"

int main(){
    int fechaNacimento[3] = {6,1,2004}
        , fechaHoy[3] = {14,5,2022};

    Persona p("Sergio",fechaNacimento,fechaHoy);
    p.findEdad();
    p.getFechas();
    p.getDatos();

    return 0;
}