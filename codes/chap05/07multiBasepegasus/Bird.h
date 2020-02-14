#ifndef CBIRD_H
#define CBIRD_H

#include "Animal.h"

class CBird : public CAnimal
{
public:
    CBird(int ws=0, const char *strName="", int a=0, int w=0);
    ~CBird();

    void Show();
    void Fly();
    void Talk();

private:
    int wingSpan;
};

#endif // CBIRD_H
