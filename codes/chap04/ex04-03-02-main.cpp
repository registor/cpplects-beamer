// 例04-03-02：ex04-03-02.cpp
// 重载操作符的测试

int main()
{
    CLocation ob1(39.907306,
                  116.391264);
    CLocation ob2, ob3;

    ob2 = ++ob1;
    ob3 = ob2++;

    ob1.show();
    ob2.show();
    ob3.show();
}
