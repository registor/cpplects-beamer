#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int year = rand() % 2011;
    int month = rand() % 13;
    int day = rand() % 29;

    string strDate;
    ostringstream streamInfo;
    streamInfo << year << '/' << month << '/' << day;
    strDate = streamInfo.str();
    cout << strDate;
    return 0;
};
