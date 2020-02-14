// 例06-vdtor-base：ex06-vdtor-base.cpp
// 类虚析构函数的演示

class A
{
public:
    virtual ~A() //虚析构函数
    {
        cout << "A::~A() is called." << endl;
    }
    A()
    {
        cout << "A::A() is called." << endl;
    }
};
