// 例03-35：ex03-35.cpp
// C++ 基本绘图函数的演示

#include <Graph2D.h>

using namespace graph;

void display()
{
    circle(512, 384, 100);
    putText(480, 384, "Hello World!");
}

int main(int argc, char *argv[])
{
    initGraph(display);
    return 0;
}
