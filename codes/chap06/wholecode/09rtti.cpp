// 例09rtti：ex09rtti.cpp

#include <iostream>
#include <typeinfo>

using namespace std;

class CBase
{
    // Since RTTI is included in the virtual method table
    // there should be at least one virtual function.
public:
    virtual void foo() {}
    void methodBase()
    {
        cout << "method Base" << endl;
    }
};

class CDerived : public CBase
{
public:
    void methodDerived()
    {
        cout << "method Derived" << endl;
    }
};

void my_function(CBase* my_a)
{
    CDerived *my_b = dynamic_cast<CDerived*>(my_a);
    if(my_b != NULL)
        my_b->methodDerived();
    else
        my_a->methodBase();
}

/*
int main()
{
    CBase myA;
    my_function(&myA);
}*/


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
