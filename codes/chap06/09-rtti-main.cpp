// 例09-rtti-main：ex09-rtti-main.cpp
//实例化CBase和CDerived的对象，并测试他们的类型

#include <iostream>
#include <typeinfo>

using namespace std;

int main( void )
{
    CBase* a = new CBase;
    CBase* b = new CDerived;
    if(typeid(* a) == typeid(* b))
        cout << "Identical" << endl;
    else
        cout << "Different" << endl;
    cout << "a is: " << typeid( a ).name() << endl;
    cout << "b is: " << typeid( b ).name() << endl;
    cout << "*a is: " << typeid( *a ).name() << endl;
    cout << "*b is: " << typeid( *b ).name() << endl;
    return 0;
}
