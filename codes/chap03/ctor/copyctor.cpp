// 例03-00：ex03-00.cpp
// 拷贝构造函数

#include <iostream>

using namespace std;

//Test copy constructor
class A
{
    int v;
public:
    A(int e = 0)
    {
        v = e;
    }
    A(A &objA)
    {
        v = objA.v;
        cout << "Test copy constructor!" << endl;
    }
    int Get()
    {
        return v;
    }
};

void funF(A objA)
{
    cout << "funF " << objA.Get() << endl;
}

A funG()
{
    A objA(2);
    return objA;
}

int main()
{
    A a(1);
    A b = a;
    A c(b);

    funF(a);
    c = funG();
    cout << "funG " << c.Get() << endl;
    return 0;
}


