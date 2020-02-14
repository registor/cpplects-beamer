#ifndef ELLIPSE_H_INCLUDED
#define ELLIPSE_H_INCLUDED

#include "Shape.h"

class CEllipse: public CShape
{
    float x_radius, y_radius;
public:
    void Draw()
    {
        //ULONG color1 = CShape::textColor;
        CPoint2D pos = CShape::wPos;
        ULONG color2 = CShape::objColor;
    }
};

#endif // ELLIPSE_H_INCLUDED
