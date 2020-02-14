#ifndef POINT2D_H_INCLUDED
#define POINT2D_H_INCLUDED

#include <iostream>
#include <cmath>
using namespace std;

#if !defined(M_PI)
#define M_PI				3.1415926535897932384626433832795
#endif

class CPoint2D
{
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

    void Translate(float x, float y)
    {
        this->x = this->x + x;
        this->y = this->y + y;
    }

    void Scale(float r)
    {
        x = r * x;
        y = r * y;
    }

    void Rotate(float angle)
    {
        angle = angle * M_PI / 180.0;
        float tmp;
        tmp = x;
        x = x * cos(angle) + y * sin(angle);
        y = y * cos(angle) - tmp * sin(angle);
    }

    friend class CShape;
    friend class CRectangle;
    friend class CEllipse;
    friend class CDonut;
};

#endif // POINT2D_H_INCLUDED
