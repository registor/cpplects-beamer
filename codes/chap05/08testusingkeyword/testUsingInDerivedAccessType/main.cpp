#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

//class A
//{
//public :
//    int d;
//public:
//    void getd()
//    {
//        cout << d << endl;
//    }
//};
//class B: private A // 私有继承
//{
//public :
//    using A::d; // 改为公有
//    using A::getd; // 改为公有
//};
//
//int main()
//{
//    A a;
//    a.d = 1; // 公有
//    B b;
//    b.d = 2; // 私有改为公有
//    b.getd(); // 私有改为公有
//    a.getd(); // 公有
//    return 0;
//}


class A
{
public:
    int f1;
protected:
    int f2;
private:
    int f3;
};

//如下声明只是举例，实际声明中不能重复声明同一成员。
class B : public A  //这里的访问标号可以是任意，它只影响没有被显示声明的从基类继承的成员的访问
{
//public:
//    using A::f1; //从基类继承的public成员，此处声明后可以被外部访问
//    using A::f2; //从基类继承的protected成员，此处声明后可以被外部访问
//    using A::f3; //声明错误，派生类不可访问基类的private成员，即使声明也不行
//protected:
//    using A::f1; //从基类继承的public成员，此处声明后可以被下级派生类访问，但不能被外部访问
//    using A::f2; //从基类继承的protected成员，此处声明后可以被下级派生类访问，但不能被外部访问
//    using A::f3; //声明错误，派生类不可访问基类的private成员，即使声明也不行
//private:
//    using A::f1; //从基类继承的public成员，此处声明后既不能被下级派生类访问，也不能被外部访问
//    using A::f2; //从基类继承的protected成员，此处声明后既不能被下级派生类访问，也不能被外部访问
//    using A::f3; //声明错误，派生类不可访问基类的private成员，即使声明也不行
};

int main()
{
    return 0;
}




