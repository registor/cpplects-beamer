#ifndef SAFEARRAY_INCLUDED
#define SAFEARRAY_INCLUDED

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

#endif // SAFEARRAY_INCLUDED
