// 例05-09：ex05-09.cpp
// 类 protect 属性 和
// public 方法 的演示
#include <iostream>

using namespace std;
class base1
{
protected:
    int x;
public:
    void showx()
    {
        cout << x << "\n";
    }
};
class base2
{
protected:
    int y;
public:
    void showy()
    {
        cout << y << "\n";
    }
};
