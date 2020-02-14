// 例03-44：ex03-44.cpp
// CPoint2D 的定义

class CPoint2D
{
public:
    float x, y;
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
};
