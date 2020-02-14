#ifndef DONET_H_INCLUDED
#define DONET_H_INCLUDED

#include "Ellipse.h"

class CDonut: public CEllipse
{
    float ratio;
public:
    void Draw()
    {
        //ULONG color1 = CShape::textColor;
        CPoint2D pos = CShape::wPos;
        ULONG color2 = CShape::objColor;
    }
};


#endif // DONET_H_INCLUDED
