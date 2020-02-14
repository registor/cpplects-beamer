// 例03-01：ex03-01.cpp
// 结构体定义及其中函数的实现

struct StuNode
{
    int ID;
    char name[20];
    char gender[16];
    int age;
    void Set(int id, char *n, char *g, int a);
};

// 赋值函数，为结构体中的数据赋值
void StuNode::Set(int id, char *n, char *g, int a)
{
    ID = id;
    strcpy(name, n);
    strcpy(gender, g);
    age = a;
}
