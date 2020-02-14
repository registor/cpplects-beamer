// 例03-12：ex03-12.cpp
// 创建类 Stach 的对象，调用相关成员函数进行处理

int main()
{
    Stash s;

    s.initialize();            // 初始化

    for(int i = 0; i < 100; i++)
        s.add(100 - i);     // 添加元素

    for(int j = 0; j < s.count(); j++)
        cout << "No." << j << " = "
             << s.fetch(j) << endl; // 输出元素

    s.cleanup();
}
