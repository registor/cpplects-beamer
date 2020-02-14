#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include "Bull.h"

using namespace std;

CBull::CBull(const char *strName, int a, int w, int pow): CAnimal(strName, a, w)
{
    power = pow;
}
void CBull::Show()
{
    CAnimal::Show();
    cout << power << endl;
}
void CBull::Talk()
{
    cout << "Moo..." << endl;
    PlaySound("Sound\\bull.wav", NULL, SND_FILENAME | SND_SYNC);
}
