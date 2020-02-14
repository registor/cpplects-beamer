// 例03-44：ex03-44.cpp
// CRectangle 的定义

class CRectangle
{
    unsigned long color;
    |\textcolor{red}{\textbf CPoint2D wPos, lv1, lv2, lv3, lv4}|;
public:
    CRectangle();
    CRectangle( unsigned long color,
                CPoint2D w,
                float width,
                float height);
    void Translate(float xOffset,
                   float yOffset);
    void Rotate(float angle);
    void Scale(float r);
    void Draw();
};
