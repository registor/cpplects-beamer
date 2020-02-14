#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    list <StuNode> first, second;

    ReadFile("first.txt", first);
    ReadFile("second.txt", second);

    first.sort();
    second.sort();

    first.merge(second);
    first.unique();

    PrintFile("result.txt", first);

    return 0;
}


