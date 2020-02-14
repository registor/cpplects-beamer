#include <iostream>
using namespace std;

int main()
{
    long IFlags, INewFlags;
    IFlags = cout.flags();
    cout << hex;
    INewFlags = cout.flags();
    cout << "Default flag is:" << IFlags << endl;
    cout << "New flag is:" << INewFlags << endl;
    for(int i = 0; i < 18; i++)
        cout << flags[i].flag << '\t' << flags[i].flagname << endl;
    return 0;
}

