//例07-08；ex07-08.cpp
//定义一个出栈函数
// Pop an object.
template <class ST>
ST stack<ST>::Pop()
{
    if(top == 0)
    {
        cout << "Stack is empty.\n";
        return 0;
    }
    top--;
    return s[top];
}
