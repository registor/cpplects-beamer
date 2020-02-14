// 例03-03：ex03-03.cpp

struct StuNode
{
    int ID;
    char name[20];
    char gender[16];
    int age;

    // 赋值函数，以同类型的对象为参数
    void Set(StuNode inNode)
    {
        ID = inNode.ID;
        strcpy(name, inNode.name);
        strcpy(gender, inNode.gender);
        age = inNode.age;
    }
};
int main()
{
    StuNode myNode0;
}
