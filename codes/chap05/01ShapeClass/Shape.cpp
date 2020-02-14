#include "Shape.h"

void CShape::DrawText()
{
    int len = strlen(strText);
    float r = 10;
    CPoint2D initP;

    initP.x = wPos.x - r * len / 2.0;
    initP.y = wPos.y - r / 2.0;

    setColor(textColor);
    putText(initP.x, initP.y, strText);
}

void CShape::Translate(float x, float y)
{
    wPos.Translate(x, y);
}

void CShape::ShowPos()
{
    cout << strText << endl;
    cout << "CShape: (" << wPos.x << ", " << wPos.y << ")" << endl;
}
