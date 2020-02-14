#ifndef ELLIPSE_H_INCLUDED
#define ELLIPSE_H_INCLUDED

#include "Shape.h"

class CEllipse: public CShape
{
protected:
    float x_radius, y_radius;
public:
    CEllipse()
    {
        x_radius = y_radius = 50;
    }
    CEllipse(float rx, float ry, CPoint2D w, char const *strText,
             ULONG objColor = 0xBBE0E3,
             ULONG textColor = 0): CShape(w, strText, objColor, textColor)
    {
        x_radius = rx;
        y_radius = ry;
    }
    void Draw();
    void ShowPos();
};

#endif // ELLIPSE_H_INCLUDED
