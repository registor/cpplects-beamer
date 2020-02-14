#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text("I like C++, I like to code in C++.");
    string newstr, sstr;
    int pos;
    cout << "Input string and new string:";
    cin >> sstr >> newstr;
    if((pos = text.find(sstr)) == string::npos)
        cout << sstr << " not found in \"" << text << "\"" << endl;
    else
    {
        cout << "old string: " << text << endl;
        text.replace(pos, sstr.length(), newstr);
        cout << "new string: " << text << endl;
    }
    return 0;
}

