#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include "Horse.h"

using namespace std;

CHorse::CHorse(const char *strName, int a, int w, int pow):
    CAnimal(strName, a, w)
{
    //ctor
    power = pow;
}

void CHorse::Show()
{
    CAnimal::Show();
    cout << "Power:" << power << endl;
}
void CHorse::Talk()
{
    cout << "Whinny!..." << endl;
    PlaySound("Sound\\horse.wav", NULL, SND_FILENAME | SND_SYNC);
}
