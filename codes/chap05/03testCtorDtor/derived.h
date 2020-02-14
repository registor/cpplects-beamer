#ifndef DERIVED_H_INCLUDED
#define DERIVED_H_INCLUDED

#include "memobj.h"
#include "base.h"

class derived: public base
{
    memObj obj2;
public:
    derived():obj2(2)
    {
        cout << "Constructing derived\n";
    }
    ~derived()
    {
        cout << "Destructing derived\n";
    }
};

#endif // DERIVED_H_INCLUDED
