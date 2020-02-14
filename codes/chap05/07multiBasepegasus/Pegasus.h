#ifndef CPEGASUS_H
#define CPEGASUS_H

#include "Horse.h"
#include "Bird.h"

class CPegasus : public CHorse, public CBird
{
public:
    CPegasus(const char *strName="", int a=0, int w=0, int ws=0, int pow=0);
    ~CPegasus();

    void Talk();

};

#endif // CPEGASUS_H
