#include <iostream>

using namespace std;

//定义一个栈类
const int SIZE = 10;

template <class ST>
class stack
{
    ST s[SIZE]; // holds the stack
    int top; // index of top-of-stack
public:
    stack()
    {
        top = 0;    // initialize stack
    }

    void Push(ST ob); // push object on stack
    ST Pop(); // pop object from stack
};

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
