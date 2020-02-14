// 例03-02：ex03-02.cpp
// 结构体的定义

struct StuNode
{
    int ID;
    char name[20];
    char gender[16];
    int age;

    // 结构体中的赋值函数
    void Set(int id, char *n, char *g, int a)
    {
        ID = id;
        strcpy(name, n);
        strcpy(gender, g);
        age = a;
    }
};
