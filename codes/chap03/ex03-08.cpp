// 例03-08：ex03-08.cpp
// 创建 CStash 的实例，调用函数

int main()
{
    CStash s;
    int i;

    initialize(&s);                 // 初始化

    for(i = 0; i < 100; i++)
        add(&s, 100 - i);           // 添加元素

    for(i = 0; i < count(&s); i++)
        printf("No. % d = % d\n",    // 输出元素
               i, fetch(&s, i));

    cleanup(&s);              // 释放 s.a 的空间
    return 0;
}
