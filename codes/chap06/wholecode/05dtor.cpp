// 例05dtor：ex05dtor.cpp
// 继承关系的演示

#include <iostream>

using namespace std;

class A
{
public:
    ~A()
    {
        cout << "A::~A() is called." << endl;
    }
    A()
    {
        cout << "A::A() is called." << endl;
    }
};

class B: public A
{
private:
    int  *ip;
public:
    B(int size = 0)
    {
        ip = new int[size];
        cout << "B::B() is called." << endl;
    }
    ~B()
    {
        cout << "B::~B() is called." << endl;
        delete []ip;
    }
};

int main()
{
    A *b = new B(10);
    delete b;
    return 0;
}
