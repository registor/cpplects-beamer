#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include "Bird.h"

using namespace std;

CBird::CBird(const char *strName, int a, int w, int ws):
    CAnimal(strName, a, w)
{
    //ctor
    wingSpan = ws;
}

void CBird::Show()
{
    CAnimal::Show();
    cout << "Wingspan:" << wingSpan << endl;
}
void CBird::Talk()
{
    cout << "Chirp..." << endl;
    PlaySound("Sound\\eagle.wav", NULL, SND_FILENAME | SND_SYNC);
}
