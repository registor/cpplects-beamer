#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        cout << FindRoots(0, 2, 2) << endl;
        cout << FindRoots(1, 2, 1) << endl;
        cout << FindRoots(1, 4, 1) << endl;
        cout << FindRoots(0, 0, 1) << endl;
        cout << FindRoots(-1, 9, 3) << endl;
    }

    catch(double x)
    {
        if(abs(x) < 1.0e-8) cout << "Deviding zero!" << endl;
        if(x < 0) cout << "The roots are complex!" << endl;
    }

    cout << "Continue..." << endl;
    return 0;
}

