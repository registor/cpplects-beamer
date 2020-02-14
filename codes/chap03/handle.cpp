#include "handle.h"

struct Handle::Inner
{
    int i;
};

void Handle::initialize()
{
    pointer = new Inner;
    pointer->i = 0;
}

void Handle::cleanup()
{
    delete pointer;
}

int Handle::read()
{
    return pointer->i;
}

void Handle::change(int x)
{
    pointer->i = x;
}
