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

void Print(int elem)
{
    cout << elem << " ";
}

//输出AddFun处理过后的容器中的值，演示c++中for_each的使用
int main()
{
    vector<int> v(10, 0);
    const int n = 10;

    for_each (v.begin(), v.end(), AddFun<int, n>);
    //for_each (v.begin(), v.end(), AddClass<int>(n));
    for_each (v.begin(), v.end(), Print);
    cout << endl;
    for_each (v.begin(), v.end(), AddFun < int, n + 1 > );
    //for_each (v.begin(),v.end(), AddClass<int>(n+1));
    for_each (v.begin(), v.end(), Print);
    cout << endl;
}
