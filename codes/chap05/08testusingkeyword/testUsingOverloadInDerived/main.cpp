#include <iostream>

using namespace std;

class Base
{
public:
    void menfun()
    {
        cout << "Base function:()" << endl;
    }

    void menfun(int n)
    {
        cout << "Base function with int:(" << n << ")" << endl;
    }
};

class Derived : Base
{
public:
    using Base::menfun; //using声明只能指定一个名字, 不能带形参表
    void menfun(double n)
    {
        cout << "Derived function with int:(" << n << ")" << endl;
    }
};

int main()
{
    Base b;
    Derived d;
    b.menfun();
    d.menfun(); //如果去掉Derived类中的using声明,会出现错误：no matching function for call to ‘Derived::menfun()’
    return 0;
}
