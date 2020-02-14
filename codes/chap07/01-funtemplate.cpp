//例07-01；ex07-01.cpp
//求不同类型的两个数之和，演示c++的简单函数模版的定义与使用
#include <iostream>

using namespace std;

template <class T1, class T2>
T1 add(T1 x, T2 y)
{
    return x + y;
}

int main()
{
    cout << add(9, 'A') << endl;	    //隐式实例化
    cout << add<int, char>(9, 'A') << endl; //显式实例化
}

