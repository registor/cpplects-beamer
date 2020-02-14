// 例03-06：ex03-06.cpp
// C 语言方式关于结构体的定义
// 及处理该结构体相关函数的定义
// const -- 定义常量
const int increment = 5;

typedef struct CStashTag
{
    int size; // Number of storage spaces
    int next; // Next empty space
    int *a;    //Dynamically allocated arrays
} CStash;

void initialize(CStash* s);
void cleanup(CStash* s);
int add(CStash* s, int element);
int fetch(CStash* s, int index);
int count(CStash* s);
void inflate(CStash* s, int increase);
