// 例03-29：ex03-29.cpp
// 类默认构造函数的定义

class ch_stack
{
    char *s;
    int tp;
    int size;
public:
    ch_stack();
    |\textcolor{red}{\textbf {ch\_stack(ch\_stack \&sObj)}}|;
    ...
};
