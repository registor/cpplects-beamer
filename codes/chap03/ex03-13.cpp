// 例03-13：ex03-13.cpp
// 定义类 Stash，对其中成员（数据或函数）
// 根据需要赋予不同的权限

class Stash
{
private:
    int size; // Number of a spaces
    int next; // Next empty space
    int *a;// Dynamically allocated arrays
    void inflate(int increase);
public:
    void initialize();
    void cleanup();
    int add(int element);
    int fetch(int index);
    int count();
};
