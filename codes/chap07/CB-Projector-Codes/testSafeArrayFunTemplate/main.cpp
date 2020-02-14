//模板类的写法，演示c++的简单模板类的写法
#include <iostream>

using namespace std;

template <class T, int size>
class CSafeArray
{
    T a[size];
public:
    CSafeArray()
    {
        for(int i = 0; i < size; i++)
            a[i] = i;
    }
    T &operator[](int i);
};

template <class T, int size>
T &CSafeArray<T, size>::operator[](int i)
{
    if(i < 0 || i > size - 1)
    {
        cout << "Index value of ";
        cout << i << " is out-of-bounds.\n";
        exit(1);
    }
    return a[i];
}

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
