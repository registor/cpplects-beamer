#include <iostream>
#include "Pegasus.h"

using namespace std;

CPegasus::CPegasus(const char *strName, int a, int w, int ws, int pow):
    CHorse(pow, strName, a, w), CBird(ws, strName, a, w)
{
    //ctor
    cout << "Pegasus constructor" << endl;
}

CPegasus::~CPegasus()
{
    //dtor
    cout << "Pegasus destructor" << endl;
}


void CPegasus::Talk()
{
    CHorse::Talk();
}
