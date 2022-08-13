#include <iostream>
using namespace std;

template <int N>
struct Factorial
{
    enum { value = N * Factorial <N - 1 >::value };
};

template <>
struct Factorial <0>
{
    enum { value = 1 };
};

int main()
{
    int x = Factorial<4>::value;
    cout << x << endl;

    return 0;
}