// 例03-04：ex03-04.cpp
// 演示new，delete的使用，引用传递参数
struct Stash
{
    int *a;
    int size;
};

// 在 s.a 的尾部添加元素 elem
void addData (Stash &s, int elem)
{
    Stash tmpBuff;
    tmpBuff.size = s.size + 1;
    tmpBuff.a = new int [tmpBuff.size];
    for (int i = 0; i < s.size; i++)
        tmpBuff.a[i] = s.a[i];
    delete []s.a;
    tmpBuff.a[s.size] = elem;
    s = tmpBuff;
}
