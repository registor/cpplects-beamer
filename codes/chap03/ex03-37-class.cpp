// 例03-37：ex03-37-class.cpp
class CPoint2D
{
    int x, y;
    |\textcolor{red}{\textbf static int num}|;
public:
    CPoint2D(){
        x = y = 0;
        |\textcolor{red}{\textbf num++}|;
    }
    CPoint2D(int x, int y){
        this->x = x;
        this->y = y;
        |\textcolor{red}{\textbf num++}|;
    }
    ~CPoint2D(){
        num--;
    }
    |\textcolor{red}{\textbf static int GetCounter()\{}|
        |\textcolor{red}{\textbf return num}|;
    |\textcolor{red}{\textbf \}}|
};
