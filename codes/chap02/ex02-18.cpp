// 例02-18：ex02-18.cpp
template <class _T>
void bubble(_T *items, int count)
{
    register int a, b;
    _T t;
    for(a = 1; a < count; a++)
        for(b = count - 1; b >= a; b--)
            if(items[b - 1] > items[b])
            {
                t = items[b - 1];
                items[b - 1] = items[b];
                tems[b] = t;
            }
}
