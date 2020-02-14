#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double PI = 3.1415926535;
    int precision;
    cout << fixed;
    cout << PI << endl;
    cout.width(8);
    cout.fill('0');
    for(precision = 0; precision <= 9; precision++)
    {
        cout.precision(precision);
        cout << PI << endl;
    }
    cout << PI << endl;
    cout << setw(8) << setfill('0');
    for(precision = 0; precision <= 9; precision++)
    {
        cout << setprecision(precision);
        cout << PI << endl;
    }
    return 0;
}

