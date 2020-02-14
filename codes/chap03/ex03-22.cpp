// 例03-22：ex03-22.cpp
// 用类定义栈类型，类成员函数之间的调用

class ch_stack
{
    char *s;
    int tp;
    int size;
public:
    ch_stack()            // 默认构造函数
    {
        init();
    }
    void  init();         // 初始化函数
    ...
};
