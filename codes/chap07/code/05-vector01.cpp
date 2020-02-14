#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    for (int i = 0; i < 6; ++i)
        v.push_back(i);

    for (int i = 0; i < 3; ++i)
        v.pop_back();

    for (int i = 0; i < (int)v.size( ); ++i)
        cout << v[i] << ' ';
    cout << endl;

    return 0;
}
