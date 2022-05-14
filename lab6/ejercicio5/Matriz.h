#include<time.h>
#include<iostream>
using namespace std;

class Matriz{
    private:
        int matriz[3][3];
        bool numerosUsados[9];
    public:
        Matriz(){
            srand(time(NULL));
            for(int i = 0 ; i < 3; i++){
                for(int j = 0 ; j < 3;){
                    int n = 1 + rand() % 9;
                    if(!yaFueUsado(n)){
                        matriz[i][j] = n;
                        j++;
                    }
                }
            }
        }
        void dondeSeEncuentra(int dato){
            for(int i = 0; i < 3; i++)
                for(int j = 0 ; j < 3; j++)
                    if(matriz[i][j] == dato)
                        cout<<"["<<i<<"]["<<j<<"]"<<endl;
        }

        bool yaFueUsado(int num){
            if(this->numerosUsados[num-1] == false){ // no fue usado
                this->numerosUsados[num-1] = true;
                return false;
            }
            return true; // ya fue usado
        }

        void display(){
            for(int i = 0; i < 3; i++){
                for(int j = 0 ; j < 3; j++)
                        cout<<matriz[i][j]<<"   ";
                cout<<endl;
            }
        }
};