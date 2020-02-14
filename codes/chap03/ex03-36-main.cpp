// 例03-36：ex03-36.cpp
// C++ 基本绘图函数的演示

#include <Graph2D.h>
#include "rectangle.h"
using namespace graph;
CRectangle rect(100, 100, 200, 100);
void display()
{
    rect.drawObj();
}
void keyboard(unsigned char key)
{
    rect.moveObj();
}
int main(int argc, char *argv[])
{
    initGraph(display, keyboard);
    return 0;
}
