// 例02-02：ex02-02.cpp
// 求三个数的平均值，演示C++简单I/O格式控制
#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
    float num1, num2, num3;   //定义三个数

    cout << "Please input three numbers:" ;
    cin >> num1 >> num2 >> num3;

    cout << setw(20) << setprecision(12);
    cout << "The average of " << num1 << " , " << num2 << " and " << num3;
    cout << " is:" << setw(20) << (num1 + num2 + num3) / 3 << endl;

    return 0;
}
