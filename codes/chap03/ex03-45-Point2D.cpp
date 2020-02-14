// 例03-45：ex03-45.cpp

class CPoint2D
{
    |\textcolor{red}{\textbf float x, y}|;
public:
    CPoint2D()
    {
        x = y = 0;
    }
    CPoint2D(float x, float y)
    {
        this->x = x;
        this->y = y;
    }
    void Translate(float x, float y);
    void Scale(float r);
    void Rotate(float angle);
    friend class CRectangle;
};
