//ex02-19-00.cpp
#include <iostream>
using namespace std;
extern void p1dispG();
extern void p2dispG();
extern void p2dispg();
int G = 0, g = 0;
int main(){
    p1dispG();
    p2dispG();
    p2dispg();
    cout << "in p G=" << G << endl;
    cout << "in p g=" << g << endl;
    return 0;
}
