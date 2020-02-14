#include <iostream>

using namespace std;

void Math(float, float, float&, float&, float&);

int main()
{
    float x, y;
    float sum, sub, pro;

    cin >> x >> y;

    Math(x, y, sum, sub, pro);

    cout << sum << " " << sub << " " << pro << endl;
    return 0;
}

void Math(float _x, float _y, float &sum, float &sub, float &pro)
{
    sum = _x + _y;
    sub = _x - _y;
    pro = _x * _y;
}
