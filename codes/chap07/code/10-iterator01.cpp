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
