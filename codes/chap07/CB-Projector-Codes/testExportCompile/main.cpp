#include <iostream>

#include "safearray.h"
#include "safearray.cpp"

using namespace std;

int main()
{
    const int SIZE = 10;
    CSafeArray<int, SIZE> intOb;
    CSafeArray<double, SIZE> doubleOb;

    cout << "Integer array: ";
    for(int i = 0; i < SIZE; i++)
        intOb[i] = i;

    for(int i = 0; i < SIZE; i++)
        cout << intOb[i] << " ";

    cout << '\n';

    cout << "Double array: ";
    for(int i = 0; i < SIZE; i++)
        doubleOb[i] = (double) i / 3;

    for(int i = 0; i < SIZE; i++)
        cout << doubleOb[i] << " ";

    cout << '\n';

    intOb[SIZE + 1] = 100;

    return 0;
}
