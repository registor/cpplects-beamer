//例07-15；ex07-15.cpp
//容器vector上定义输出函数
template <class ITER>
void Print(ITER first, ITER last)
{
    while(first != last)
    {
        cout << *first << " ";
        ++first;
    }
    cout << endl;
}
