#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(6,1);

    for (int i=0; i<v.size( ); ++i)
        cout << v[i] << ' ';
    cout << endl;

    for (int i=0; i<v.size( ); ++i)
        v[i]=i;

    for (int i=0; i<v.size( ); ++i)
        cout << v[i] << ' ';
    cout << endl;
}
