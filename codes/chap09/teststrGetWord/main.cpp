#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string s1 = "The quick brown fox jumps over the lazy dog!";
    char *c_str = NULL;
    char *p;

    c_str = (char *)s1.c_str();
    p = strtok(c_str, " !");
    while(p != NULL)
    {
        cout << strlen(p) << '\t' << p << endl;
        p = strtok(NULL, " !");
    }
    return 0;
};

