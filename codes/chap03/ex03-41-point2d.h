// 例03-41：ex03-41.cpp
// 类友元函数的定义

//point2d.h
#ifndef POINT2D_INCLUDED
#define POINT2D_INCLUDED
class CPoint2D
{
private:
    float x, y;
public:
    CPoint2D()
    {
        x = y = 0;
    }
    CPoint2D(float x, float y)
    {
        this->x = x;
        this->y = y;
    }
    friend float Distance(CPoint2D p1,
                          CPoint2D p2);
};

#endif // POINT2D_INCLUDED
