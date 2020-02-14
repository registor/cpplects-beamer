#include <iostream>
#include "Horse.h"

using namespace std;

CHorse::CHorse(int pow, const char *strName, int a, int w):
    CAnimal(strName, a, w)
{
    //ctor
    power = pow;
    cout << "Horse constructor " << endl;
}

CHorse::~CHorse()
{
    //dtor
    cout << "Horse destructor " << endl;
}

void CHorse::Show()
{
    CAnimal::Show();
    cout << "Power:" << power << endl;
}
void CHorse::Run()
{
    cout << "I can run! I run because I love to!!" << endl;
}
void CHorse::Talk()
{
    cout << "Whinny!..." << endl;
}
