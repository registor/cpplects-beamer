// 例03-10：ex03-10.cpp
// C++ 中类的定义（数据+处理函数的封装）

const int increment = 5;

class Stash
{
    int size; // Number of a spaces
    int next; // Next empty space
    int *a;// Dynamically allocated arrays
    // Functions
    void initialize();
    void cleanup();
    int add(int element);
    int fetch(int index);
    int count();
    void inflate(int increase);
};
