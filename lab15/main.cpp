#include"ContruirCarro.h"
#include"Director.h"

int main(){

    Director * director = new Director;
    ConstruiCarro(*director);
    delete director;

    return 0;
}