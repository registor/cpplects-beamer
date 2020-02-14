// 例03-15：ex03-15.cpp
// 关于类中数据成员定义为类类型的示例

class Team;   //已定义的类
class Grade
{
    Team  a;  // 已定义的类类型
    Grade *p; // 正在定义的类类型定义指针成员
    Grade &r; // 正在定义的类类型定义引用成员
    Grade b;  // 错误! 使用了未定义完整的类
};
