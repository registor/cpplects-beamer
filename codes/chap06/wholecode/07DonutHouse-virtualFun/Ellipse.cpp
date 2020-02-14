#include "Ellipse.h"

void CEllipse::Draw()
{
    setColor(objColor);
    fillEllipse(wPos.x, wPos.y, x_radius, y_radius);

    setColor(0x000000);
    setLineWidth(2);
    ellipse(wPos.x, wPos.y, x_radius, y_radius);
    setLineWidth(1);
}

void CEllipse::Scale(float ratio)
{
    wPos.Scale(ratio);
    x_radius = ratio*x_radius;
    y_radius = ratio*y_radius;
}

void CEllipse::ShowPos()
{
    cout << "CEllipse: " << strText << " " << wPos.x << " " << wPos.y << " ";
    cout <<x_radius << " " << y_radius << endl;
}
