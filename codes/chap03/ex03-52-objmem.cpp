// 例03-52：ex03-52.cpp
// static 成员的示例

#include <iostream>
using namespace std;
class CPoint2D{
    int x, y;
    // 静态数据成员
    static int num;
public:
    CPoint2D(){
        x = y = 0;
        num++;
    }
    CPoint2D(int x, int y){
        this->x = x;
        this->y = y;
        num++;
    }
    ~CPoint2D(){
        num--;
    }
    // 静态函数成员
    static int GetCounter(){
        return num;
    }
    void Output();
};
