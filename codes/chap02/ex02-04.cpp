// 例02-04：ex02-04.cpp
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int m = 3, n = 4;

    cout << "before swap:";
    cout << m << "," << n << endl;

    swap(&m, &n);

    cout << "after swap:";
    cout << m << "," << n << endl;

    return 0;
}
