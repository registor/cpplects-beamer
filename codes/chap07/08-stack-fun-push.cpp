//例07-08；ex07-08.cpp
//定义一个入栈函数
// Push an object.
template <class ST>
void stack<ST>::Push(ST ob)
{
    if(top == SIZE)
    {
        cout << "Stack is full.\n";
        return;
    }
    s[top] = ob;
    top++;
}
