// 例03-16：ex03-16.cpp
// 类 Stash 成员函数 add 的实现

// 在 a 的尾部添加元素 element，若 a 中已无空间，则调用
// inflate函数增加 increment 个单位
// 函数返回 a 中最后一个元素的 index

int Stash::add(int element)
{
    if(next >= size)
        inflate(increment);
    a[next] = element;
    next++;
    return (next - 1);
}
