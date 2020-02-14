#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

#include <Graph2D.h>
#include "Point2D.h"

using namespace graph;

class CShape
{
    ULONG textColor;
    char strText[256];
protected:
    CPoint2D wPos;
public:
    ULONG objColor;
};

#endif // SHAPE_H_INCLUDED
