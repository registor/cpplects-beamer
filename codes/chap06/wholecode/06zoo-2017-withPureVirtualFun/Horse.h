#ifndef CHORSE_H
#define CHORSE_H

#include "Animal.h"

class CHorse : virtual public CAnimal
{
public:
    CHorse(const char *strName = "", int a = 0, int w = 0, int pow = 0);

    void Show();
    void Talk();

protected:
    int power;

};

#endif // CHORSE_H
