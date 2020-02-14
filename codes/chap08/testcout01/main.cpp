#include <iostream>

using namespace std;

int main()
{
    char buff[11] = "0123456789";

    cout << buff << endl;

    for (int i=0; i<10; i++)
        cout.put(buff[i]);
    cout << endl;

    cout.write(buff,10);
    cout << endl;
    return 0;
}

