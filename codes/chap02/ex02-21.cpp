// 例02-21：ex02-21.cpp
#include <iostream>
using namespace std;

void fun()
{
    static int n = 0;
    int m = 0;
    n++;
    m++;
    cout << "m=" << m << ", n=" << n << endl;
}

int main()
{
    for (int i = 0; i < 4; i++)
        fun();
    return 0;
}
