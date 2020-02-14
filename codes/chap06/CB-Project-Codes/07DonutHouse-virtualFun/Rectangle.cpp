#include "Rectangle.h"

void CRectangle::Draw()
{
    setColor(objColor);
    fillRectangle(lv1.x+wPos.x, lv1.y+wPos.y, lv3.x+wPos.x, lv3.y+wPos.y);
    setColor(0x000000);

    setLineWidth(2);
    rectangle(lv1.x+wPos.x, lv1.y+wPos.y,lv3.x+wPos.x, lv3.y+wPos.y);
    setLineWidth(1);
}

void CRectangle::Scale(float ratio)
{
    wPos.Scale(ratio);
    lv1.Scale(ratio);
    lv2.Scale(ratio);
    lv3.Scale(ratio);
    lv4.Scale(ratio);
}

void CRectangle::ShowPos()
{
    cout << "CRectangle: " << strText << " " << wPos.x << " " << wPos.y << " ";
    cout << lv1.x << " " << lv1.y <<  " " << lv3.x <<  " " << lv3.y << endl;
}
