// 例02-16：ex02-16.cpp
template <class _T>
_T sum(_T *a, int size)
{
    _T result = 0;
    for (int i = 0; i < size; i++)
    {
        result += a[i];
    }
    return result;
}
