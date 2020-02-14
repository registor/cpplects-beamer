//例07-19；ex07-19.cpp
//容器vector中replace函数的使用，演示c++中容器vector的高级函数使用
// replace algorithm example
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main ()
{
    int myints[] = { 10, 20, 30, 30, 20, 10, 10, 20 };
    // 10 20 30 30 20 10 10 20
    vector<int> v (myints, myints + 8);

    // 10 99 30 30 99 10 10 99
    replace (v.begin(), v.end(), 20, 99);

    cout << "v contains:";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << " " << *it;

    cout << endl;

    return 0;
}
