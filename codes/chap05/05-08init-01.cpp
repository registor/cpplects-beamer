// 例05-08-01：ex05-08-01.cpp
// 构造函数和析构函数的演示


#include <iostream>

using namespace std;
class memObj
{
    int a;
public:
    memObj(int x)
    {
        a = x;
        cout << "Constructing member object " << a << endl;
    }
    ~memObj()
    {
        cout << "Destructing member object" << a << endl;
    }
};

