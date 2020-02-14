// 例05-05：ex05-05.cpp
//定义类CDonut，该类继承CEllipse

#include "Ellipse.h"
class CDonut: public CEllipse {
    float ratio;
public:
    CDonut()
    {
        ratio = 0.5;
    }
    CDonut( float r, float rx, float ry, CPoint2D w, char *strText,
            ULONG objColor = 0xBBE0E3,
            ULONG textColor = 0):
            CEllipse(rx, ry, w, strText, objColor, textColor) {
        ratio = r;
    }
    void Draw();
    void ShowPos();
};
