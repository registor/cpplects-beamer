//例07-15；ex07-15.cpp
//定义for_each函数，使得在first与last之间的元素都做f处理
template<class InputIterator, class Function>
Function for_each(InputIterator first, InputIterator last, Function f)
{
    for ( ; first != last; ++first ) f(*first);
    return f;
}

