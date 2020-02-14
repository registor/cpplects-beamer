#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Shape.h"

class CRectangle: public CShape
{
    CPoint2D lv1, lv2, lv3, lv4;
public:
    CRectangle(): lv1(CPoint2D(-50, -30)), lv2(CPoint2D(50, -30)),
        lv3(CPoint2D(50, 30)), lv4(CPoint2D(-50, 30)) {}
    CRectangle(float length, float width, CPoint2D w, char const *strText,
               ULONG objColor = 0xBBE0E3,
               ULONG textColor = 0): CShape(w, strText, objColor, textColor)
    {
        lv1.x = lv4.x = -0.5 * length;
        lv1.y = lv2.y = -0.5 * width;
        lv2.x = lv3.x = 0.5 * length;
        lv3.y = lv4.y = 0.5 * width;
    }
    void Draw();
    void ShowPos();
};

#endif // RECTANGLE_H_INCLUDED
