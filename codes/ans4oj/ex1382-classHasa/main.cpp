#include <iostream>
#include <cmath>

using namespace std;
//点类
class Point
{
public:
    double X;
    double Y;
    Point(): X(0.0), Y(0.0) {}
    Point(double _x, double _y);
    Point(const Point& pt);
};

Point::Point(double _x, double _y): X(_x), Y(_y) {}
Point::Point(const Point& pt)
{
    this->X = pt.X;
    this->Y = pt.Y;
}

//线类
class Line
{
    Point ptl;
    Point ptr;
public:
    Line(const Point &pt1, const Point &pt2);
    double Getlength();
};

Line::Line(const Point &pt1, const Point &pt2):
    ptl(pt1), ptr(pt2)
{

}

double Line::Getlength()
{
    double x = ptr.X - ptl.X;
    double y = ptr.Y - ptl.Y;

    return sqrt(x * x + y * y);
}

//三角形类
class Triangle
{
    Point pta;
    Point ptb;
    Point ptc;
    Line la;
    Line lb;
    Line lc;
public:
    Triangle(const Point& _pta, const Point& _ptb, const Point& _ptc);
    double getPerimeter();
    double getArea();
};

Triangle::Triangle(const Point& _pta, const Point& _ptb, const Point& _ptc):
    pta(_pta), ptb(_ptb), ptc(_ptc),
    la(pta, ptb), lb(ptb, ptc), lc(pta, ptc)
{

}

double Triangle::getPerimeter()
{
    return la.Getlength() + lb.Getlength() + lc.Getlength();
}
double Triangle::getArea()
{
    double perimeter = 0.0, area = 0.0;
    double l1, l2, l3;
    l1= la.Getlength();
    l2= lb.Getlength();
    l3= lc.Getlength();

    // 海伦公式计算面积
    perimeter = getPerimeter() / 2.0;
    area = perimeter * (perimeter - l1) * (perimeter - l2) * (perimeter - l3);
    area = sqrt(fabs(area));
    return area;
}

int main()
{
    double x = 0.0, y = 0.0;
    cin >> x >> y;
    Point pt1(x, y);
    cin >> x >> y;
    Point pt2(x, y);
    cin >> x >> y;
    Point pt3(x, y);
    Triangle tri(pt1, pt2, pt3);
    cout << tri.getPerimeter() << " ";
    cout << tri.getArea();
    return 0;
}





