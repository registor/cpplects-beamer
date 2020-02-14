//例07-04；ex07-04.cpp
//符号重载，演示c++的符号简单重载方法
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
