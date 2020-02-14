#ifndef CBIRD_H
#define CBIRD_H

#include "Animal.h"

class CBird : virtual public CAnimal
{
public:
    CBird(const char *strName = "", int a = 0, int w = 0, int ws = 0);

    void Show();
    void Talk();

protected:
    int wingSpan;
};

#endif // CBIRD_H
