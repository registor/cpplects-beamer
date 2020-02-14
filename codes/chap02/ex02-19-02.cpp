// 例02-19-02：ex02-19-02.cpp
#include <iostream>
using namespace std;
extern int G;
extern int g;
void p2dispG(){
    G = 22;
    cout << "in p2 G=" << G << endl;
}
void p2dispg(){
    g = 33;
    cout << "in p2 g=" << g << endl;
}
