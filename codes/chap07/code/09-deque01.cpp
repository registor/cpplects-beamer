#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<float> dv;

    for (int i = 0; i < 6; ++i)
    {
        dv.push_front(i * 1.1);
    }

    for (int i = 0; i < dv.size(); ++i)
        cout << dv[i] << ' ';
    cout << endl;

    return 0;
}

