// 例05-10：ex05-10.cpp
// 构造函数和析构函数的演示

#include <iostream>

using namespace std;

class base1{
public:
    base1()    {
        cout << "Constructing base1\n";
    }
    ~base1()    {
        cout << "Destructing base1\n";
    }
};

class base2{
public:
    base2()    {
        cout << "Constructing base2\n";
    }
    ~base2()    {
        cout << "Destructing base2\n";
    }
};
