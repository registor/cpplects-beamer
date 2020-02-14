#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main ()
{
    int myints[] = {10, 20, 30, 30, 20, 10, 10, 20};
    // 10 20 30 30 20 10 10 20
    vector <int> v(myints, myints + 8);
    vector <int>::iterator p, pEnd;

    pEnd = remove (v.begin(), v.end(), 20);

    for (p = v.begin(); p != pEnd; ++p)
        cout << " " << *p;
    cout << endl;

    return 0;
}
