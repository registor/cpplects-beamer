//例07-27；ex07-27.cpp
//模板类的定义
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
class AddClass
{
private:
    T theValue;
public:
    AddClass (const T& v) : theValue(v) {}
    void operator() (T& elem) const
    {
        elem += theValue;
    }
};

template <class T, int theValue>
void AddFun(T& elem)
{
    elem += theValue;
}
