// 例03-47：ex03-47.cpp
// CPoint2D 的实现

class CPoint2D
{
    float x, y;
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
    void Translate(float x, float y)
    {
        this->x = this->x + x;
        this->y = this->y + y;
    }
    //…
};
