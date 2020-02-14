// 例 03-38-01 : ex03-38-01-01.cpp
#include <iostream>

using namespace std;

class Data
{
public:
    int a, b, c;
    void printf() const
    {
        cout << "a = " << a 
             << ", b = " << b
             << ", c = " << c << endl;
    }
};
