// 例03-32：ex03-32.cpp
// 类拷贝构造函数的实现（深拷贝）

ch_stack::ch_stack(ch_stack & sObj)
{
    size = sObj.size;
    tp = sObj.tp;
    s = NULL;
    if (size != 0)
    {
        s = (char *)malloc(size);
        for (int i = 0; i <= tp; i++)
            s[i] = sObj.s[i];
    }
}
