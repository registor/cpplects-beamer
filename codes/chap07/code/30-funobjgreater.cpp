#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main ()
{
    int numbers[] = {20, 40, 50, 10, 30};
    sort (numbers, numbers + 5, greater<int>() );
    for (int i = 0; i < 5; i++)
        cout << numbers[i] << " ";
    cout << endl;
    return 0;
}
