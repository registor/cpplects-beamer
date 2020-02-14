//例07-29；ex07-29.cpp
//first、second数组中的对应元素相加，演示c++中transform函数的使用
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main ()
{
    int first[] = {1, 2, 3, 4, 5};
    int second[] = {10, 20, 30, 40, 50};
    int results[5];
    transform(first, first + 5, second, results, plus<int>());
    for (int i = 0; i < 5; i++)
        cout << results[i] << " ";
        
    cout << endl;
    
    return 0;
}
