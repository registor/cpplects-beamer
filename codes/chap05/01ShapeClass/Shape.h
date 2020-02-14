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
    ULONG objColor;
public:
    CShape(): wPos(CPoint2D(400, 300))
    {
        textColor = 0x000000;
        objColor = 0xBBE0E3;
        strcpy(strText, "null");
    }

    CShape(CPoint2D w, const char *strText,
           ULONG objColor = 0xBBE0E3,
           ULONG textColor = 0): wPos(w)
    {
        this->textColor = textColor;
        this->objColor = objColor;
        strcpy(this->strText, strText);
    }

    void Translate(float x, float y);
    void DrawText();
    void ShowPos();
};

#endif // SHAPE_H_INCLUDED
