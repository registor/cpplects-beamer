// 例04-08-01：ex04-08-01.cpp
// + ，（）运算符的重载


class loc
{
    double longitude, latitude;
public:
    ...
    loc operator+(loc op2);
    loc operator()(double i, double j)
    {
        longitude = j;
        latitude = i;
        return *this;
    }
};

