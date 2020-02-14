#include <iostream>
#include<cmath>
using namespace std;

double getDistance(double _x1, double _y1, double _z1, double _x2 = 0, double _y2 = 0, double _z2 = 0);

int main()
{
    double x1, y1, z1;
    double x2, y2, z2;

    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;

    cout << getDistance(x1, y1, z1) << endl;
    cout << getDistance(x1, y1, z1, x2, y2, z2) << endl;
    return 0;
}

double getDistance(double _x1, double _y1, double _z1, double _x2, double _y2, double _z2)
{
    double x = _x1 - _x2;
    double y = _y1 - _y2;
    double z = _z1 - _z2;

    return sqrt(x * x + y * y + z * z);
}
