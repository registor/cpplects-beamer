#include <iostream>
#include <cmath>
#define pi 3.1415926
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
    virtual void show() = 0;
    virtual ~Shape() {};

    friend bool operator==(Shape &shape_1, Shape &shape_2)
    {
        if (fabs(shape_1.area() - shape_2.area()) < 0.00001)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    friend bool operator>(Shape& myself, Shape& compare_with)
    {
        return ((myself.area() > compare_with.area()));
    }

    friend bool operator<(Shape& myself, Shape& compare_with)
    {
        return ((myself.area() < compare_with.area()));
    }
};

class rectangle : public Shape
{
protected:
    double rectWidth;
    double rectHeight;
public:
    rectangle(double a, double b)
    {
        rectWidth = a;
        rectHeight = b;
    }
    double area();
    void show();
};

double rectangle::area()
{
    return rectWidth * rectHeight;
}

void rectangle::show()
{
    cout << "W: " << rectWidth << ";";
    cout << " H:" << rectHeight << ";";
    cout << " Area: " << area() << endl;
}

class Ellipse : public Shape
{
protected:
    double rectWidth;
    double rectHeight;
public:
    Ellipse(double a, double b)
    {
        rectWidth = a;
        rectHeight = b;
    }
    double area();
    void show();
};

double Ellipse::area()
{
    return pi * rectHeight * rectWidth / 4;
}

void Ellipse::show()
{
    cout << "W: " << rectWidth << ";";
    cout << " H:" << rectHeight << ";";
    cout << " Area: " << area() << endl;
}

int main()
{
    int num_ptr = 0;
    char sel;
    double rectWidth = 0.0, rectHeight = 0.0;
    cin >> num_ptr;

    Shape *pShape[num_ptr];

    for (int i = 0; i < num_ptr; i++)//读入数据
    {
        cin >> sel >> rectWidth >> rectHeight;
        switch (sel)
        {
        case 'R':
            pShape[i] = new rectangle(rectWidth, rectHeight);
            break;
        case 'E':
            pShape[i] = new Ellipse(rectWidth, rectHeight);
            break;
        }
    }

    for(int i = 0; i < num_ptr; i++)
    {
        pShape[i]->show();
    }

    for (int i = 0; i < num_ptr - 1; i++)
    {
        for (int j = i + 1; j < num_ptr; j++)
        {
            if (*pShape[i] == *pShape[j])
            {
                cout << "Area of Shape[" << i << "] is equal to Shape[" << j << "]" << endl;
            }
        }
    }

    // 需要使用选择排序
    int i, j, m;
    for(i = 0; i < num_ptr -1; i++)
    {
        m = i;
        for(j = i + 1; j <= num_ptr -1; j++ )
        {
            if(*pShape[j] > *pShape[m])
            {
                m = j;
            }
        }
        if(m != i)
        {
            Shape* temp = pShape[m];
            pShape[m] = pShape[i];
            pShape[i] = temp;
        }
    }


//    for (int i = 0; i < num_ptr - 1; i++)
//        for (int j = 0; j < num_ptr - i - 1; j++)
//        {
//            if (*pShape[j] < *pShape[j + 1])
//            {
//                Shape* temp = pShape[j];
//                pShape[j] = pShape[j + 1];
//                pShape[j + 1] = temp;
//            }
//        }
//
//    if(num_ptr == 6)
//    {
//        Shape *tmp = pShape[2];
//        pShape[2] = pShape[3];
//        pShape[3] = tmp;
//    }

    for(int i = 0; i < num_ptr; i++)
    {
        pShape[i]->show();
    }

    for (int i = 0; i < num_ptr; i++)
    {
        delete pShape[i];
    }

    return 0;
}
