#include"Matriz.h"

int main(){
    Matriz m;
    m.display();
    for(int i = 1; i <= 9; i++){
        cout<<i<<" se encuentra en la posicion: ";
        m.dondeSeEncuentra(i);
    }
    return 0;
}