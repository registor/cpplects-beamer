#include <string>
#include <iostream>
using namespace std;

int main()
{
    string originText("I like C++, I like to code in C++.");	    //文本
    string text = originText;
    string newstr, sstr;
    int pos;                                                                    //存放查找到串的位置
    cout << "Input string and new string:";
    cin >> sstr >> newstr;
    if((pos = text.find(sstr)) == string::npos)                   //未查找到
        cout << sstr << " not found in \"" << text << "\"" << endl;
    else
        text.replace(pos, sstr.length(), newstr);

    while((pos = text.find(sstr, pos + 1)) != string::npos)
        text.replace(pos, sstr.length(), newstr);

    cout << "01234567890123456789012345678901234567890" << endl;
    cout << originText << endl;
    cout << text << endl;
    return 0;
}

