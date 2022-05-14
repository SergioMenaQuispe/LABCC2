#include<time.h>
#include<iostream>
using namespace std;

class Matriz{
    private:
        int matriz[3][3];
        int numerosUsados[9];
    public:
        Matriz(){
            srand(time(NULL));
            for(int i = 0 ; i < 3; i++)
                for(int j = 0 ; j < 3; j++){
                    int n = 1 + rand() % 9;
                    if(!yaFueUsado(n))
                        matriz[i][j] = n;
                }
        }
        void dondeSeEncuentra(int dato){
            for(int i = 0; i < 3; i++)
                for(int j = 0 ; j < 3; j++)
                    if(matriz[i][j] == dato)
                        cout<<"Posicion: ["<<i<<"]["<<j<<"]"<<endl;
        }

        bool yaFueUsado(int num){
            for(int i = 0 ; i < 9 ; i++)   
                if(numerosUsados[i] == num)
                    return true;
            numerosUsados[num-1] = num;
            return false;
        }

        void display(){
            for(int i = 0; i < 3; i++)
                for(int j = 0 ; j < 3; j++)
                        cout<<matriz[i][j]<<endl;
        }
};