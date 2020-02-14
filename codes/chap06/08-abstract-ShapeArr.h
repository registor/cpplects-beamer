// 例08-abstract-ShapeArr：ex08-abstract-ShapeArr.cpp

#ifndef SHAPEARR_H
#define SHAPEARR_H

#include "Donut.h"
#include "Triangle.h"
#include "Rectangle.h"
//定义类CShapeArr，该类具有类CShape的成员变量
const int MAX_SHAPE_NUM = 1000;

class CShapeArr
{
    CShape *m_shape[MAX_SHAPE_NUM];
    int size;
public:
    CShapeArr();
    void Add(CShape *node);
    bool GetInput();
    void ShowPos();
    void Translate(int x, int y);
    void Draw();
    ~CShapeArr();
};

#endif // SHAPEARR_H
