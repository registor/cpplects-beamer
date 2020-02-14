#include "ShapeArr.h"

CShapeArr::CShapeArr()
{
    //ctor
    size = 0;
}

bool CShapeArr::GetInput()
{
    float length, width, height, r, rx, ry, wx, wy;
    string strText;
    ULONG objCol, textCol;
    string sel;

    cin >> sel;
    while (sel != "Exit")
    {
        if (size>=MAX_SHAPE_NUM)
            return false;
        if (sel == "Triangle")
        {
            cin >> length >> height >> wx >> wy >> strText >> hex >> objCol >> textCol >> dec;
            m_shape[size] = new CTriangle(length, height, CPoint2D(wx, wy), strText, objCol, textCol);
        }
        else if (sel == "Rectangle")
        {
            cin >> length >> width >> wx >> wy >> strText >> hex >> objCol >> textCol >> dec;
            m_shape[size] = new CRectangle(length, width, CPoint2D(wx, wy), strText, objCol, textCol);
        }
        else if(sel == "Ellipse")
        {
            cin >> rx >> ry >> wx >> wy >> strText >> hex >> objCol >> textCol >> dec;
            m_shape[size] = new CEllipse(rx, ry, CPoint2D(wx, wy), strText, objCol, textCol);
        }
        else if(sel == "Donut")
        {
            cin >> r >> rx >> ry >> wx >> wy >> strText >> hex >> objCol >> textCol >> dec;
            m_shape[size] = new CDonut(r, rx, ry, CPoint2D(wx, wy), strText, objCol, textCol);
        }
        else
        {
            cout << "Error reading!" << endl;
            return false;
        }
        cin >> sel;
        size++;
    }

    return true;
}

void CShapeArr::Draw()
{
    for (int i=0; i<size; i++)
    {
        m_shape[i]->Draw();
        m_shape[i]->DrawText();
    }
}

void CShapeArr::ShowPos()
{
    for (int i=0; i<size; i++)
        m_shape[i]->ShowPos();
}

void CShapeArr::Translate(int x, int y)
{
    for (int i=0; i<size; i++)
        m_shape[i]->Translate(x,y);
}

void CShapeArr::Scale(float ratio)
{
    for (int i=0; i<size; i++)
        m_shape[i]->Scale(ratio);
}

CShapeArr::~CShapeArr()
{
    if(size != 0)
    {
        for(int i=0; i< size; i++)
        {
            if(m_shape[i]!=NULL)
                delete m_shape[i];
        }
    }
}
