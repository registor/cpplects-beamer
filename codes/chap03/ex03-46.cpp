// 例ex03-46：ex03-46.cpp
void CRectangle::Draw()
{
    SetPenColorHex(color);
    DrawFillBox(wPos.x + lv1.x, wPos.y + lv1.y,
                wPos.x + lv2.x, wPos.y + lv2.y,
                wPos.x + lv3.x, wPos.y + lv3.y,
                wPos.x|\tikzmark{b\thepage}| + lv4.x|\tikzmark{c\thepage}|, wPos.y + lv4.y);
}
