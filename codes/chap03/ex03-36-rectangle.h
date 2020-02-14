// 例03-36：ex03-36.cpp
// CRectangle类的定义

#ifndef CRECTANGLE_H
#define CRECTANGLE_H
#include "point.h"
class CRectangle{
public:
    CRectangle();
    CRectangle(int x, int y, int width, int height);
    CRectangle(CPoint2D &pt, int width, int height);
    void drawObj();
    void moveObj();
private:
    CPoint2D m_bottomLeft;
    int m_width;
    int m_height;
};

#endif // CRECTANGLE_H
