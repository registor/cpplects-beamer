// 例02-01：ex02-01.cpp
//求三个数的平均值，演示C++简单I/O
#include <iostream>
using namespace std;
int main( )
{
    float num1, num2, num3;         //定义三个数

    cout << "Please input three numbers:" ;
    cin >> num1 >> num2 >> num3;

    cout << "The average of " << num1 << ", " << num2 << "and " << num3;
    cout << " is: " << (num1 + num2 + num3) / 3 << endl;

    return 0;
}
