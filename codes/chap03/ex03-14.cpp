// 例03-14：ex03-14.cpp
// 数据成员为结构体类型的类

struct Record
{
    char name[20];
    int score;
};
class Team
{
private:
    int num;   //基本类型
    Record *p; //构造类型
};
