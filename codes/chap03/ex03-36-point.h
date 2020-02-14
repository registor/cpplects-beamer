// 例03-36：ex03-36-point.h
// CPoint2D类的定义
#ifndef CPOINT2D_H
#define CPOINT2D_H
class CPoint2D
{
public:
    CPoint2D();
    CPoint2D(int x, int y);
    CPoint2D(CPoint2D &pt);
    int getX(){
        return m_x;
    }
    int getY(){
        return m_y;
    }
    void movePoint();
private:
    int m_x;
    int m_y;
};
#endif // CPOINT2D_H
