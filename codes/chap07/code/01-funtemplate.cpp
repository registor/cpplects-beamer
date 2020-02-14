#include <iostream>

using namespace std;

template <class T1, class T2>
T1 add(T1 x, T2 y)
{
    return x + y;
}

int main()
{
    cout << add(9, 'A') << endl;
    cout << add<int, char>(9, 'A') << endl;
}

