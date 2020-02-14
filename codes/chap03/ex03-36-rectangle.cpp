// 例03-36：ex03-36.cpp
// CRectangle类的实现

#include <Graph2D.h>
#include "rectangle.h"
using namespace graph;
// 默认构造函数
CRectangle::CRectangle():m_bottomLeft(0, 0)
{
    m_width = 0;
    m_height = 0;
}
// 带参构造函数
CRectangle::CRectangle(int x, int y, int width, int height):
    m_bottomLeft(x, y), m_width(width), m_height(height)
{
}
// 带参构造函数
CRectangle::CRectangle(CPoint2D &pt, int width, int height):
    m_bottomLeft(pt), m_width(width), m_height(height)
{
}
void CRectangle::drawObj()
{
    setColor(RED);
    fillRectangle(m_bottomLeft.getX(), m_bottomLeft.getY(),
                  m_bottomLeft.getX() + m_width,
                  m_bottomLeft.getY() + m_height);
}
void CRectangle::moveObj()
{
    m_bottomLeft.movePoint();
}
