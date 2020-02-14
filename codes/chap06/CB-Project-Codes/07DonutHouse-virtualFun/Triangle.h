#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "Shape.h"

class CTriangle:public CShape
{
    CPoint2D lv1, lv2, lv3;
public:
    CTriangle():lv1(CPoint2D(-50,-30)), lv2(CPoint2D(50,-30)),lv3(CPoint2D(0,30)){}
    CTriangle(float length, float height, CPoint2D w, string strText="",
                         ULONG objColor=0xBBE0E3,
                         ULONG textColor=0):CShape(w, strText, objColor, textColor)
    {
        lv1.x = -0.5*length;
        lv1.y = lv2.y = -0.5*height;
        lv2.x = 0.5*length;
        lv3.x = 0;
        lv3.y = 0.5*height;
    }
    void Draw();
    void Scale(float ratio);
    void ShowPos();
};

#endif // TRIANGLE_H_INCLUDED
