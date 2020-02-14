// 例04-03-01：ex04-03-01.cpp
// + 及 ++ 作为成员函数的重载

// Overload prefix ++ for CLocation.
CLocation CLocation::operator++()
{
    longitude++;
    latitude++;
    return *this;
}

// Overload postfix ++ for CLocation.
CLocation CLocation::operator++(int x)
{
    longitude++;
    latitude++;
    return CLocation(latitude - 1, longitude - 1);
}
