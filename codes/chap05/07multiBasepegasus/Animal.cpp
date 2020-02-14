#include <iostream>
#include <cstring>
#include "Animal.h"

using namespace std;

CAnimal::CAnimal(const char *strName, int a, int w)
{
    //ctor
    strcpy(name, strName);
    age = a;
    weight = w;
    cout << "Animal constructor " << name << endl;
}

CAnimal::~CAnimal()
{
    //dtor
    cout << "Animal destructor " << name << endl;
}

void CAnimal::Show()
{
    cout << name << " " << age << " " << weight << endl;
}
