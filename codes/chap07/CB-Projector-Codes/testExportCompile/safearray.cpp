#include "safearray.h"

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
