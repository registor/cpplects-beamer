// 例05-dtor-derived：ex05-dtor-derived.cpp
// 定义类B，该类继承类A

class B: public A
{
private:
    int  *ip;
public:
    B(int size = 0)
    {
        ip = new int[size];
        cout << "B::B() is called." << endl;
    }
    ~B()
    {
        cout << "B::~B() is called." << endl;
        delete []ip;
    }
};
