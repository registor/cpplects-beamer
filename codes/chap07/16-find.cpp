//例07-16；ex07-16.cpp
//定义寻找函数find来获得数value所在的位置
template<class InputIterator, class T>
InputIterator find( InputIterator first, InputIterator last, const T& value )
{
    for ( ; first != last; first++) if ( *first == value ) break;
    return first;
}
