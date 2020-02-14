// 例04-05-01：ex04-05-01.cpp
// 重载 * 操作符

friend CLocation operator*(CLocation op1,
                               double s);
friend CLocation operator*(double s,
                          CLocation op1);
CLocation operator*(CLocation op1, double s)
{
    CLocation temp;
    temp.longitude = s * op1.longitude;
    temp.latitude = s * op1.latitude;
    return temp;
}
CLocation operator*(double s, CLocation op1)
{
    CLocation temp;
    temp.longitude = s * op1.longitude;
    temp.latitude = s * op1.latitude;
    return temp;
}
