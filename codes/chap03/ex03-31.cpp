// 例03-31：ex03-31.cpp
// 类拷贝构造函数的效果演示

int main()
{
    ch_stack s;

    for(int i = 0; i < 7; i++)
        s.push('a' +i);

    // 自动调用拷贝构造函数
    ch_stack sCopy(s);

    while(!s.empty()) s.pop();

    for(int i = 0; i < 7; i++)
        s.push('1' +i);

    while(!sCopy.empty)
        cout << sCopy.pop();
    cout << endl;
}
