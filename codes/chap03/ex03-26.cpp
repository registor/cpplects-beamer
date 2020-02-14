// 例03-26：ex03-26.cpp
// 演示类中析构函数的定义及实现

class ch_stack
{
    char *s;
    int tp;
    int size;
public:
    ~ch_stack()
    {
        release();
    }
    void  release();
    ...
};
