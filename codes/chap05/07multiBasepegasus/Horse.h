#ifndef CHORSE_H
#define CHORSE_H

#include "Animal.h"


class CHorse : public CAnimal
{
public:
    CHorse(int pow=0, const char *strName="", int a=0, int w=0);
    ~CHorse();

    void Show();
    void Run();
    void Talk();

private:
    int power;

};

#endif // CHORSE_H
