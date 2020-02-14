// 例05-08-03：ex05-08-03.cpp
//定义类derived，该类继承base类

class derived: public base
{
    memObj obj2;
public:
    derived():obj2(2)
    {
        cout << "Constructing derived\n";
    }
    ~derived()
    {
        cout << "Destructing derived\n";
    }
};
