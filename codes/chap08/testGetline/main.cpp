#include<iostream>

using namespace std;
int main()
{
    const int max_len = 256;
    char line[max_len];
    int i=0;

    while ( (cin.getline(line, max_len)))
    {
        cout << "[" << i << "]:" << line << endl;;
        i++;
    }
}

