#include<iostream>
#include<vector>
using namespace std;

class RegresionLineal {
    public:
    vector<float> operator()(vector<float> coord, float cant) {
        float x = coord.at(0), y = coord.at(1);

        float a, b;

        b = ((cant * x * y) - (x * y)) / ((cant * x * x) - (x * x));
        a = (y - (b * x)) / cant;

        return {a, b};
    }
};

int main()
{  
    RegresionLineal op;
    vector<float> res = op({3,4},10);

    cout<<res.at(0)<<"\t"<<res.at(1)<<endl;

    return 0;
}