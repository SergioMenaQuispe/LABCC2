#include <iostream>
#include <math.h>

using namespace std;


int counDigits(int num)
{
    int digitos = 0;
    while(num > 0){
        num /= 10;
        digitos++;
    }
    return digitos;
}

string hexToString(int num)
{
    int length = counDigits(num) / 2;
    int aux = num;

    string res;
    int iterator = pow(100,length) / 10;
    while (iterator >= 1){
        int x = (aux / iterator) * 10 + aux / (iterator /10) % 10;
        aux -= x * ( iterator / 10);
        res += char(x);
        iterator /= 100;
    }
    
    return res;
}

template<int n>
struct Hexadecimal
{
    enum {
        value_1 = (n % 16 >= 0 && n % 16 < 10) ? (48 + n % 16) : (55 + n % 16),
        value_2 = value_1 + Hexadecimal<n / 16>::value_2 * 100
    };
};

template<>
struct Hexadecimal<0>
{
    enum { value_2 = 0 };
};


int main()
{
    cout<<hexToString(Hexadecimal<1234>::value_2)<<endl;

    return 0;
}
