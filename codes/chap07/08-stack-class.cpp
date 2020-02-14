//例07-08；ex07-08.cpp
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
