// 例 03-38-01 : ex03-38-01-02.cpp
int main()
{
    Data d, *dp = &d;

    int Data::*pmInt = &Data::a;
    // pmInt指向Data的int成员
    dp->*pmInt = 12;
    pmInt = &Data::b;
    d.*pmInt = 24;
    pmInt = &Data::c;
    dp->*pmInt = 36;
    dp->printf();

    return 0;
}
