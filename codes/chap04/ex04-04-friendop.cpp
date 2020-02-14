// 例04-04：ex04-04.cpp
// 操作符 + , ++ 的重载

CLocation operator+(CLocation op1, CLocation op2)
{
    CLocation temp;
    temp.longitude = op1.longitude + op2.longitude;
    temp.latitude = op1.latitude + op2.latitude;
    return temp;
}
CLocation operator++(CLocation &op1)
{
    op1.longitude++;
    op1.latitude++;
    return op1;
}
CLocation operator++(CLocation &op1, int x)
{
    return CLocation(op1.latitude++, op1.longitude++);
}
