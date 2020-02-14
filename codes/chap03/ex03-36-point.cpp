// 例03-36：ex03-36-point.cpp
// 重载构造函数及不同构造函数的实现
#include <iostream>
#include "point.h"
using namespace std;

// 默认构造函数
CPoint2D::CPoint2D(){ 
    m_x = 0;
    m_y = 0;
}

// 带参构造函数
CPoint2D::CPoint2D(int x, int y): 
    m_x(x), m_y(y){
}

// 拷贝构造函数
CPoint2D::CPoint2D(CPoint2D &pt){ 
    m_x = pt.m_x;
    m_y = pt.m_y;
}
void CPoint2D::movePoint(){
    m_x += 10;
    m_y += 10;
}
