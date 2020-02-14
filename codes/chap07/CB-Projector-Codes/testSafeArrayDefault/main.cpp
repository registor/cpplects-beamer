//模板类的写法，演示c++的简单模板类的写法
#include <iostream>

using namespace std;

template <class T = int, int size = 10>
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
    CSafeArray <>intOb;
    CSafeArray <double> doubleOb1;
    CSafeArray<double, 100> doubleOb2;

    return 0;
}
