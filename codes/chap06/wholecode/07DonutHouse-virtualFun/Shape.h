#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

#include "Point2D.h"

class CShape
{
protected:
    ULONG textColor;
    string strText;
    CPoint2D wPos;
    ULONG objColor;
public:
    CShape():wPos(CPoint2D(400,300))
    {
        textColor = 0x000000;
        objColor = 0xBBE0E3;
        strText = "";
    }

    CShape(CPoint2D w, string strText="",
            ULONG objColor = 0xBBE0E3,
            ULONG textColor = 0):wPos(w)
    {
        this->textColor = textColor;
        this->objColor = objColor;
        this->strText = strText;
    }

    virtual ~CShape()
    {

    }

    void Translate(float x, float y);
    void DrawText();
    virtual void Scale(float ratio) = 0;
    virtual void Draw() = 0;
    virtual void ShowPos() = 0;
};

#endif // SHAPE_H_INCLUDED
