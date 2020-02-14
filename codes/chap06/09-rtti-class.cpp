// 例09-rtti-class：ex09-rtti-class.cpp

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
