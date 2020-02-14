// 例ex03-50-constfun.cpp
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
    void Set(float x, float y) const|\tikzmark{b\thepage}| {
        this->x = x; this->y = y;|\badmark|
    }
};
