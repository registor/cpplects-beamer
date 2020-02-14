// 例03-42：ex03-42.cpp

class B; // 前向声明
class A
{
public:
    void funA(B b);
};

class B
{
public:
    void funB(A b);
};
