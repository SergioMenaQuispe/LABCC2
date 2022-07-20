#include"ClienteCode.h"
#include"Director.h"

int main(){

    Director * director = new Director();
    ClienteCode(*director);
    delete director;

    return 0;
}