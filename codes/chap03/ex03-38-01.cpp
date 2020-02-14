// 例 03-38-01 : ex03-38-01.cpp
#include <iostream>

using namespace std;

class Data
{
public:
    int a, b, c;
    void printf() const
    {
        cout << "a = " << a << ", b = " << b
             << ", c = " << c << endl;
    }
};

int main()
{
    Data d, *dp = &d;

    int Data::*pmInt = &Data::a;
    // pmInt指向Data的int成员
    dp->*pmInt = 12;
    pmInt = &Data::b;
    d.*pmInt = 24;
    pmInt = &Data::c;
    dp->*pmInt = 36;
    dp->printf();

    return 0;
}
