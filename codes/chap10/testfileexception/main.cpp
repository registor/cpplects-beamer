#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    ifstream file;
    file.exceptions ( ifstream::failbit | ifstream::badbit );
    try
    {
        file.open ("test.txt");
        while (!file.eof()) file.get();
    }
    catch (ifstream::failure e)
    {
        cout << "Exception opening/reading file";
    }

    file.close();

    return 0;
}

