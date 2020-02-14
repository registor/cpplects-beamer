//容器vector的使用，演示c++中容器vector的简单使用
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(6, 1);

    for (unsigned int i = 0; i < v.size( ); ++i)
        cout << v[i] << ' ';
    cout << endl;

    for (unsigned int i = 0; i < v.size( ); ++i)
        v[i] = i;

    for (unsigned int i = 0; i < v.size( ); ++i)
        cout << v[i] << ' ';

    cout << endl;
}
