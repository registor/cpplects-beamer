// 例04-07-02：ex04-07-02.cpp
// 重载 [] 操作符的测试

int main()
{
    atype ob(1, 2, 3);
    cout << ob[1];
    cout << " ";
    ob[1] = 25;
    cout << ob[1];
    ob[3] = 44;
}
