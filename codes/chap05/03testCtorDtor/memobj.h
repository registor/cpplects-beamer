#ifndef MEMOBJ_H_INCLUDED
#define MEMOBJ_H_INCLUDED

#include <iostream>

using namespace std;

class memObj
{
    int a;
public:
    memObj(int x)
    {
        a = x;
        cout << "Constructing member object " << a << endl;
    }
    ~memObj()
    {
        cout << "Destructing member object" << a << endl;
    }
};

#endif // MEMOBJ_H_INCLUDED
