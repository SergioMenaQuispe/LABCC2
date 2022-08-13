#include<iostream>
#include<vector>
using namespace std;


class Find{
    public:    
    int operator()(float & begin, float & end, float ser) const {
        float * pBegin = &begin;
        float * pEnd = &end;

        int count = 0;

        float * aux = pBegin;
        while (aux != pEnd){
            if(*aux == ser )
                count++;
            aux++;
        }
        
        return count;
    }
};

int main(){

    Find f;
    vector<float> vec = {1,3,4,5,3,6,3,1,5,5,5,3,1,5};

    cout<<f(*vec.begin(),*vec.end(),5)<<endl;

    return 0;
}