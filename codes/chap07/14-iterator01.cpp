//例07-14；ex07-14.cpp
//容器vector的反向迭代器的使用，演示c++中容器vector中反向迭代器的使用
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int>v;
    vector <int>::reverse_iterator p;

    for(int i = 0; i < 10; i++)
        v.push_back(i);

    for(p = v.rbegin(); p != v.rend(); p++)
        cout << *p << " ";
    cout << endl;
}
