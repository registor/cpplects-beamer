// 例05-08-02：ex05-08-02.cpp
// 定义一个简单的类，包含一个属性，
// 构造函数和析构函数

class base
{
    memObj obj1;
public:
    //该构造函数有成员初始化列表
    base():obj1(1)
    {
        cout << "Constructing base\n";
    }
    ~base()
    {
        cout << "Destructing base\n";
    }
};
