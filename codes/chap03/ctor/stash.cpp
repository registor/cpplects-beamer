// 例03-00：ex03-00.cpp

#include <iostream>

using namespace std;

class Stash
{
    int size; // Number of a spaces
    int next; // Next empty space
    int *a;// Dynamically allocated arrays
protected:
    void inflate(int increase);
public:
    void initialize();
};

// 增加空间
void Stash::inflate(int increase)
{
    size += increase;
}

// 初始化
void Stash::initialize()
{
    size = 0;
    next = 0;
    a = NULL;
}

int main()
{
    Stash s;
    int len = s.size;
    s.inflate(100);
    s.initialize();
}
