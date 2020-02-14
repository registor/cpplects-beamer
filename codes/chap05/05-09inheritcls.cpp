// 例05-09：ex05-09.cpp
//定义类derived，该类继承了base1和base2

class derived: public base1, public base2
{
public:
    void set(int i, int j)
    {
        x=i;
        y=j;
    }
};

