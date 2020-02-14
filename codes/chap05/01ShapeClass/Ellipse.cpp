#include "Ellipse.h"

void CEllipse::Draw()
{
    setColor(CShape::objColor);
    fillEllipse(CShape::wPos.x, CShape::wPos.y, x_radius, y_radius);

    setColor(0x000000);
    setLineWidth(2);
    ellipse(CShape::wPos.x, CShape::wPos.y, x_radius, y_radius);
    setLineWidth(1);

    CShape::DrawText();
}

void CEllipse::ShowPos()
{
    CShape::ShowPos();
    cout << "CEllipse: (" << x_radius << ", " << y_radius << ")" << endl;
}
