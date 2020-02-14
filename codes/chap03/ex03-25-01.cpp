// 例 03-25-01-delegating : ex03-25-01.cpp
#include <iostream>

using namespace std;

class X
{
public:
    X(int _a, int _b, int _c):a(_a), b(_b), c(_c)
    {cout << "X(int, int, int)" << endl;}
    X(int _a, int _b):X(_a, _b, 0)
    {cout << "X(int, int)" << endl;}
    X(int _a):X(_a, 0, 0)
    {cout << "X(int)" << endl;}
    X():X(1, 1)
    {c = 1; cout << "X()" << endl;}
public:
    int a, b, c;
};

int main(){
    cout << "1: " << endl;
    X one(1, 2, 3);
    cout << "2: " << endl;
    X two(1, 2);
    cout << "3: " << endl;
    X three(1);
    cout << "4: " << endl;
    X four;
}
