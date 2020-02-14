// 例ex03-41-main：ex03-41-main.cpp
#include <iostream>
#include <cmath>
#include "point2d.h"
using namespace std;
float Distance(CPoint2D p1, 
               CPoint2D p2){
    float dx = p1.x - p2.x;
    float dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy );
}
int main(){
    CPoint2D v0(1, 1), v1(4, 5);
    cout << |\textcolor{red}{\textbf Distance}||\tikzmark{c\thepage}||\textcolor{red}{\textbf (v0, v1)}| << endl;
    return 0;
}
