// 例03-33-01：ex03-33-01.cpp
// 构造函数重载，理解 this 指针

class Point2D
{
    float x, y;
public:
    Point2D()
    {
        x = y = 0;
    }
    Point2D(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void Output()
    {
        cout << this << endl;
    }
};
