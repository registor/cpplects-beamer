// 例02-19-01：ex02-19-01.cpp
#include <iostream>
using namespace std;
extern int G;
void p1dispG()
{
    G = 11;
    cout << "in p1 G=" << G << endl;
}
