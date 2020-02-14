// 例03-00：ex03-00.cpp
// 通过 this 指针值的输出，认识 this 指针

#include <iostream>

using namespace std;

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

int main()
{
    Point2D v0, v1;

    cout << "Address of Object v0:"
         << &v0 << endl;

    cout << "Address of Object v1:"
         << &v1 << endl;

    v0.Output();
    v1.Output();

    return 0;
}

