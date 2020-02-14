// 例03-09：ex03-09.cpp
// C++ 方式关于结构体的定义（数据+处理函数）

const int increment = 5;

struct Stash
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
