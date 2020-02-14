//返回指定区间内的奇数个数，演示c++中count_if的使用
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsOdd (int i)
{
    return ((i % 2) == 1);
}

int main ()
{
    int mycount;

    vector<int> v;
    for (int i = 1; i < 10; i++) v.push_back(i); // v: 1 2 3 4 5 6 7 8 9

    mycount = (int) count_if (v.begin(), v.end(), IsOdd);
    cout << "v contains " << mycount  << " odd values.\n";

    return 0;
}
