#ifndef BASE_H_INCLUDED
#define BASE_H_INCLUDED

#include "memobj.h"

class base
{
    memObj obj1;
public:
    //该构造函数有成员初始化列表
    base():obj1(1)
    {
        cout << "Constructing base\n";
    }
    ~base()
    {
        cout << "Destructing base\n";
    }
};

#endif // BASE_H_INCLUDED
