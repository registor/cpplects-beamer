// 例03-18：ex03-18.cpp
// 类类型的变量作为函数参数，返回值的演示

class Clock
{
private:
    int H, M, S;
public:
    Clock AddTime(Clock C2)    // 形参为Clock类型的变量
    {
        Clock T;              // 函数体中定义了Clock类型的变量
        ...
        return T;             // 返回类型为Clock类型
    }
};
