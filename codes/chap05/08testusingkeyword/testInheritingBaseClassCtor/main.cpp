#include <iostream>

using namespace std;

//class A
//{
//public:
//    A( int InInt )
//    {
//        ;
//    }
//    A( double InDouble, int InInt )
//    {
//        ;
//    }
//    A( float InFloat, int InInt, const char* Char )
//    {
//        ;
//    }
//};
//
//class B : public A
//{
//public:
//    using A::A;            // 使用A中的构造函数
//};
//
//int main()
//{
//
//    return 0;
//}

struct Base
{
    Base()
    {
        ;
    }
    Base( int )
    {
        ;
    }
};

struct Derived : Base
{
    using Base::Base;
};

int main()
{
    Derived derived; // 编译失败, 因为没有提供Derived 的默认构造函数
    return 0;
}
