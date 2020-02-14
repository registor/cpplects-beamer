#include <iostream>

using namespace std;


class CShape
{
public:
    void ShowPos()
    {
        cout << "CShape::ShowPos()" << endl;
    }
};

class CEllipse: public CShape
{
public:
    void ShowPos()
    {
        cout << "CEllipse::ShowPos()" << endl;
    }
};

class CDonut: public CEllipse
{
public:
    void ShowPos()
    {
        cout << "CDonut::ShowPos()" << endl;
    }
};

void Show(CShape p)
{
    p.ShowPos();
}

void Show(CShape *p)
{
    p->ShowPos();
}

int main()
{
    CDonut myDonut;
    CEllipse p = myDonut;
    CEllipse *p1 = &myDonut;
    CEllipse &pr = myDonut;

    myDonut.ShowPos();
    p.ShowPos();
    p1->ShowPos();
    pr.ShowPos();

    Show(myDonut);
    Show(&myDonut);

    return 0;
}
