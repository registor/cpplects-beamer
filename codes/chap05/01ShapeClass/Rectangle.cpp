#include "Rectangle.h"

void CRectangle::Draw()
{
    setColor(objColor);
    fillRectangle(lv1.x + wPos.x, lv1.y + wPos.y,
                  lv3.x + wPos.x, lv3.y + wPos.y);
    setColor(0x000000);

    setLineWidth(2);
    rectangle(lv1.x + wPos.x, lv1.y + wPos.y,
              lv3.x + wPos.x, lv3.y + wPos.y);
    setLineWidth(1);

    DrawText();
}

void CRectangle::ShowPos()
{
    CShape::ShowPos();
    cout << "CRectangle: (" << lv1.x << ", " << lv1.y << "), (" << lv3.x << ", " << lv3.y << ")" << endl;
}
