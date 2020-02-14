#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include "Pegasus.h"

using namespace std;

CPegasus::CPegasus(const char *strName, int a, int w, int ws, int pow):
    CAnimal(strName, a, w),
    CHorse(strName, a, w, pow),
    CBird(strName, a, w, ws)
{
    //ctor
}

void CPegasus::Show()
{
    CAnimal::Show();
    cout << wingSpan << " " << power << endl;
}
void CPegasus::Talk()
{
    CHorse::Talk();
}
