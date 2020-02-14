// 例03-20：ex03-20.cpp
// 类中成员（数据或函数）protect 权限的示例

class Stash
{
    int size; // Number of a spaces
    int next; // Next empty space
    int *a;// Dynamically allocated arrays
protected:
    void inflate(int increase);
public:
    void initialize();
    void cleanup();
    int add(int element);
    int fetch(int index);
    int count();
};
