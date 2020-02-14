//例07-15；ex07-15.cpp
//在容器vector上定义寻找函数FIND来
//获得数value在容器vector中的位置
template <class ITER, class T>
ITER Find(ITER first, ITER last, T value)
{
    while(first != last && *first != value)
        ++first;
    return first;
}
