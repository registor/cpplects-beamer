// 例03-49：ex03-49.cpp
// CPoint2D 的定义

class CPoint2D{
    float x, y;
public:
    CPoint2D(){
        x = y = 0;
    }
    CPoint2D(float x, float y){
        this->x = x; this->y = y;
    }
    float GetX() const {
        return x;
    }
    float GetY() const;
    void Set(float x, float y){
        this->x = x; this->y = y;
    }
};
