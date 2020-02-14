//例07-08；ex07-08.cpp
//使用定义的栈类模板来完成不同类型栈的入栈出栈操作
int main()
{
    int i;

    stack<char> cs;
    cs.Push('a');
    cs.Push('b');
    cs.Push('c');
    for(i = 0; i < 3; i++)
        cout << "Pop cs: " << cs.Pop() << "\n";

    stack<double> ds;
    ds.Push(1.1);
    ds.Push(2.2);
    ds.Push(3.3);
    for(i = 0; i < 3; i++)
        cout << "Pop ds: " << ds.Pop() << "\n";

    return 0;
}

