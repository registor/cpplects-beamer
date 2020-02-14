#ifndef SHAPEARR_H
#define SHAPEARR_H

#include "Donut.h"
#include "Triangle.h"
#include "Rectangle.h"

const int MAX_SHAPE_NUM = 1000;

class CShapeArr
{
    CShape *m_shape[MAX_SHAPE_NUM];
    int size;
public:
    CShapeArr();
    bool GetInput();
    void ShowPos();
    void Translate(int x, int y);
    void Scale(float ratio);
    void Draw();
    ~CShapeArr();
};

#endif // SHAPEARR_H
