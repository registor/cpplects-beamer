#include "Donet.h"

void CDonut::Draw()
{
    setColor(CShape::objColor);
    fillDonut(CShape::wPos.x, CShape::wPos.y, CEllipse::x_radius, CEllipse::y_radius, ratio);

    setColor(0);
    setLineWidth(2);
    donut(CShape::wPos.x, CShape::wPos.y, CEllipse::x_radius, CEllipse::y_radius, ratio);
    setLineWidth(1);

    CShape::DrawText();
}

void CDonut::ShowPos()
{
    CEllipse::ShowPos();
    cout << "CDonut: " << ratio << endl;
}
