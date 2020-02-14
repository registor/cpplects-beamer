// 例05-06：ex05-06.cpp
// 定义矩形的Draw方法

void CRectangle::Draw()
{
    setColor(|\textcolor{red}{CShape::objColor}|);
    fillRectangle(lv1.x + |\textcolor{red}{CShape::wPos.x}|, lv1.y + |\textcolor{red}{CShape::wPos.y}|,
                  lv3.x + |\textcolor{red}{CShape::wPos.x}|, lv3.y + |\textcolor{red}{CShape::wPos.y)}|;
    setColor(0x000000);

    setLineWidth(2);
    rectangle(lv1.x + |\textcolor{red}{CShape::wPos.x}|, lv1.y + |\textcolor{red}{CShape::wPos.y}|,
              lv3.x + |\textcolor{red}{CShape::wPos.x}|, lv3.y + |\textcolor{red}{CShape::wPos.y)}|;
    setLineWidth(1);

    |\colorbox{green}{CShape::DrawText()}|;
}
