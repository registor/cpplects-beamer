#ifndef CBULL_H
#define CBULL_H

#include "Animal.h"

class CBull: public CAnimal
{
public:
    CBull(const char *strName = "", int a = 0, int w = 0, int pow = 0);

    void Show();
    void Talk();

private:
    int power;
};

#endif // CBULL_H
