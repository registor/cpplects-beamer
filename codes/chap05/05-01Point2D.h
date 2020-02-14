// 例05-01：ex05-01.cpp
//定义一个表示二维平面的点的类

class CPoint2D{
    float x, y;
public:
    CPoint2D(){
        x = y = 0;
    }
    CPoint2D(float x, float y){
        this->x = x;
        this->y = y;
    }
    void Translate(float x, float y);
    void Scale(float r);
    void Rotate(float angle);
    friend class CShape;
    friend class CRectangle;
    friend class CEllipse;
    friend class CDonut;
};
