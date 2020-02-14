#include <iostream>

using namespace std;

class Cylinder
{
public:
    Cylinder(double _h, double _r): height(_h), radius(_r) {}

    static double pi;
    static double GetPI()
    {
        return pi;
    }

    double GetRadius()
    {
        return radius;
    }
    double GetHeight()
    {
        return height;
    }
    void SetRadius(double _r)
    {
        radius = _r;
    }
    void SetHeight(double _h)
    {
        height = _h;
    }

    double Volume();
    double Area();

private:
    double height, radius;
};

double Cylinder::pi = 3.1415926;

int main()
{
    double h, r;
    cin >> h >> r;

    Cylinder c(h, r);

    cout << "pi=" << c.GetPI()<<", ";
    cout << "height="<< c.GetHeight()<<", ";
    cout << "radius="<< c.GetRadius()<<":";
    cout << "volume=" << c.Volume()<<", ";
    cout << "area="<< c.Area()<<endl;

    return 0;
}

double Cylinder::Volume()
{
    return pi * radius * radius * height;
}

double Cylinder::Area()
{
    return 2 * pi * radius * height + 2 * pi * radius * radius;
}

