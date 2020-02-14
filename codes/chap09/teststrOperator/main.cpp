#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1("I like C++!");
    string str2("I like Java!");
    string str3;
    int pos;

    if(str1 < str2)
        str3 = str1 + str2;
    else
        str3 = str2 + str1;
    pos = str3.rfind("+");
    str3.replace(pos + 1, 7, " and");

    cout << str3 << endl;
    return 0;
}


