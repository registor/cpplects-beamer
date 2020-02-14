// 例05-dtor-base：ex05-dtor-base.cpp
// 构造函数和析构函数的演示

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
