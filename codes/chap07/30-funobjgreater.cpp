//例07-30；ex07-30.cpp
//数组排序，演示c++中sort函数的使用
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main ()
{
    int numbers[] = {20, 40, 50, 10, 30};
    sort (numbers, numbers + 5, greater<int>() );
    for (int i = 0; i < 5; i++)
        cout << numbers[i] << " ";
    cout << endl;
    return 0;
}
