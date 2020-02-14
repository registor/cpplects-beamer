//例07-13；ex07-13.cpp
//容器deque的assign函数的使用，演示c++中容器deque的高级函数使用
#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    deque<string> ds;

    ds.assign (3, string("Hello"));
    ds.push_back ("] last");
    ds.push_front ("first [");

    for (int i = 0; i < ds.size(); ++i)
        cout << ds[i] << " ";
    cout << endl;

    ds.pop_front();
    ds.pop_back();

    for (int i = 1; i < ds.size(); ++i)
        ds[i] = "another " + ds [i];

    ds.resize (4, "Hello C++");

    for (int i = 0; i < ds.size(); ++i)
        cout << ds[i] << " ";
    cout << endl;

    return 0;
}
