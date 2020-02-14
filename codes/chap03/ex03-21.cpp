// 例03-21：ex03-21.cpp
// 用类定义栈类型

class ch_stack
{
private:
    char *s; //栈的内容保存在s中
    int tp; //栈顶指示器，栈空为－1
    int size;
public:
    void init();
    void release();
    void push(char c);
    char pop();
    ...
};
