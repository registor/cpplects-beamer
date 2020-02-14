#include "Triangle.h"

void CTriangle::Draw()
{
    setColor(objColor);
    fillTriangle(lv1.x+wPos.x, lv1.y+wPos.y,lv2.x+wPos.x, lv2.y+wPos.y,lv3.x+wPos.x, lv3.y+wPos.y);
    setColor(0x000000);

    setLineWidth(2);
    triangle(lv1.x+wPos.x, lv1.y+wPos.y, lv2.x+wPos.x, lv2.y+wPos.y, lv3.x+wPos.x, lv3.y+wPos.y);
    setLineWidth(1);
}

void CTriangle::Scale(float ratio)
{
    wPos.Scale(ratio);
    lv1.Scale(ratio);
    lv2.Scale(ratio);
    lv3.Scale(ratio);
}

void CTriangle::ShowPos()
{
    cout << "CTriangle: " << strText << " " << wPos.x << " " << wPos.y << " ";
    cout << lv1.x << " " << lv1.y <<  " " << lv2.x << " " << lv2.y << " "<< lv3.x <<  " " << lv3.y << endl;
}
