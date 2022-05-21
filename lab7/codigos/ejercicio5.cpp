#include<iostream>
using namespace std;

class operacionBase{
    protected:
        int operador;
    public:
        void setOperador(int op) {
            operador = op;
        }

        int getOperador(){
            return  operador;
        }
};

class operacionFactorial : public operacionBase{
    public:
        int devolverFactorial(){
            if(operador == 0 || operador == 1)
                return 1;
            int f = 1;
            for(int i = 1; i <= operador; i++)
                f *= i;
            return f;
        }
};

int main(){

    operacionFactorial op;
    op.setOperador(6);
    cout<<"EL operador es: "<<op.getOperador()<<endl;
    cout<<"El factorial es: "<<op.devolverFactorial()<<endl;

    return 0;
}