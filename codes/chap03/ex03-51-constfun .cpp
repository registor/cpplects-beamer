// 例ex03-51-constfun .cpp
class CPoint2D{
    float x, y;
public:
    CPoint2D(){
        x = y = 0;
    }
    CPoint2D(float x, float y){
        this->x = x; this->y = y;
    }
    float GetX() const|\tikzmark{b\thepage}| {
        return x;
    }
    float GetY() const|\tikzmark{c\thepage}|;
    void Set(float x, float y) {
        this->x = x; this->y = y;
    }
};
