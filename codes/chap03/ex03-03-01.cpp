// 例03-03-01：ex03-03-01.cpp

#include <Graph2D.h>
using namespace graph;
struct myRect
{
    double x;
    double y;
    double width;
    double height;
    
    void Draw()
    {
        setColor(RED); 
        fillRectangle(x, y,
           x + width, y + height);
    }

    void Move()
    {
        x += 10;
        y += 10;
    }
};
