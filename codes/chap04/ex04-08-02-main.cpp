// 例04-08-02：ex04-08-02.cpp
// 运算符重载的测试

int main()
{
    loc ob1(10, 20), ob2(1, 1);
    ob1.show();
    ob1(7, 8);
    ob1.show();
    ob1 = ob2 + ob1(10, 10);
    ob1.show();
    return 0;
}
