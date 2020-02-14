// 例03-19：ex03-19.cpp
// 创建 Stash 的实例，调用相关函数进行处理

int main()
{
    Stash s;

    s.initialize();

    for(int i = 0; i < 100; i++)
        s.add(i);

    for(int j = 0; j < s.count(); j++)
        cout << "No." << j << " = "
             << s.fetch(j) << endl;

    s.cleanup();
}
