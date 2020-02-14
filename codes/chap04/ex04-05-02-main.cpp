// 例04-05-02：ex04-05-02.cpp
// 重载 * 操作符的测试

int main()
{
    CLocation ob1(39.907306,
                116.391264);
    CLocation ob2, ob3;

    ob2 = ob1 * 1.01;
    ob3 = -1.01 * ob1;

    ob1.show();
    ob2.show();
    ob3.show();
}
