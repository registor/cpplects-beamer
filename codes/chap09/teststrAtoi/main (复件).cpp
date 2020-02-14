#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int year, month, day;
    string strDate = "2010 12 31";
    istringstream streamInfo(strDate);
    streamInfo >> year >> month >> day;
    cout << year << month << day;
    return 0;
};

