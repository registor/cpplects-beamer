// 例04-01-02：ex04-01-02.cpp
// 重载操作符的测试

int main()
{
    CLocation Tiananmen(39.907306, 116.391264);
    CLocation Offset(-5.642159, -8.323558);
    CLocation Yangling;

    Tiananmen.show();

    Yangling = Tiananmen + Offset;

    Yangling.show();
    return 0;
}
