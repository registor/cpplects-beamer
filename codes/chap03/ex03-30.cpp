// 例03-30：ex03-30.cpp
// 类拷贝构造函数的实现（浅拷贝）

ch_stack::ch_stack(ch_stack & sObj)
{
    size = sObj.size;
    tp = sObj.tp;
    s = sObj.s;
}
