#include <iostream>
#include <vector>

using namespace std;

//在容器vector上定义寻找函数FIND来
//获得数value在容器vector中的位置
template <class ITER, class T>
ITER Find(ITER first, ITER last, T value)
{
    while(first != last && *first != value)
        ++first;

    return first;
}

//容器vector上定义输出函数
template <class ITER>
void Print(ITER first, ITER last)
{
    while(first != last)
    {
        cout << *first << " ";
        ++first;
    }

    cout << endl;
}

//容器vector的使用实例，演示c++中容器vector的简单使用
typedef vector <int> container;
typedef vector <int>::iterator iterCon;

int main()
{
    container v;
    iterCon where;
    int key = 10;

    for(int i = 0; i < 10; i++)
        v.push_back(i);

    where = Find(v.begin(), v.end(), key);

    if(where != v.end())
        cout << *where << endl;
    else
        cout << "Fail to find the value!" << endl;

    Print(v.begin(), v.end());

    return 0;
}
