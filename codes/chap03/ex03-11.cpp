// 例03-11：ex03-11.cpp
// 类中成员函数 add 的实现

// 在 a 的尾部添加元素 element，
// 若 a 中已无空间了，则调用 inflate
// 函数增加 increment 个单位
// 返回 a 中最后一个元素的 index
int Stash::add(int element)
{
    if(next >= size)
        inflate(increment);
    a[next] = element;
    next++;
    return(next - 1);
}
