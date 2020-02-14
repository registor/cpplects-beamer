#include <iostream>
#include "Bird.h"

using namespace std;

CBird::CBird(int ws, const char *strName, int a, int w):
    CAnimal(strName, a, w)
{
    //ctor
    wingSpan = ws;
    cout << "Bird constructor " << endl;
}

CBird::~CBird()
{
    //dtor
    cout << "Bird destructor " << endl;
}

void CBird::Show()
{
    CAnimal::Show();
    cout << "Wingspan:" << wingSpan << endl;
}
void CBird::Fly()
{
    cout << "I can fly! I can fly!!" << endl;
}
void CBird::Talk()
{
    cout << "Chirp..." << endl;
}
