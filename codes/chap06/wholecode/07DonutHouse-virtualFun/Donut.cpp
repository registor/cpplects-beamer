#include "Donut.h"

void CDonut::Draw()
{
    setColor(objColor);
    fillDonut(wPos.x, wPos.y, x_radius, y_radius, ratio);

    setColor(0);
    setLineWidth(2);
    donut(wPos.x, wPos.y, x_radius, y_radius, ratio);
    setLineWidth(1);
}

void CDonut::Scale(float ratio)
{
    CEllipse::Scale(ratio);
}

void CDonut::ShowPos()
{
    cout << "CEllipse: " << strText << " " << wPos.x << " " << wPos.y << " ";
    cout << ratio << " " << x_radius << " " << y_radius << endl;
}
