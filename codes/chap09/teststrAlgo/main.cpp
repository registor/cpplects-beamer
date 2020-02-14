#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void print(char c)
{
    cout << c;
}

int main()
{
    string s1 = "abcdefghijklmnopqrstuvwxyz";

    cout << s1 << endl;
    reverse(s1.begin(), s1.end());
    cout << s1 << endl;
    sort(s1.begin(), s1.end());
    for_each(s1.begin(), s1.end(), print);

    return 0;
}

