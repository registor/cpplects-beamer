// 例05-11：ex05-11.cpp
// 继承，多重继承的演示

#include <iostream>
#include <cstring>

using namespace std;

class CAnimal
{
    char name[32];
    int age;
    int weight;
public:
    CAnimal(const char *strName="", int a=0, int w=0)
    {
        strcpy(name, strName);
        age = a;
        weight = w;
        cout << "Animal constructor " << name << endl;
    }
    void Show()
    {
        cout << name << " " << age << " " << weight << endl;
    }
    ~CAnimal()
    {
        cout << "Animal destructor " << name << endl;
    }
};

class CBird: public CAnimal
{
    int wingSpan;
public:

    CBird(int ws=0, const char *strName="", int a=0, int w=0):CAnimal(strName, a, w)
    {
        wingSpan = ws;
        cout << "Bird constructor " << endl;
    }
    void Show()
    {
        CAnimal::Show();
        cout << "Wingspan:" << wingSpan << endl;
    }
    void Fly()
    {
        cout << "I can fly! I can fly!!" << endl;
    }
    void Talk()
    {
        cout << "Chirp..." << endl;
    }
    ~CBird()
    {
        cout << "Bird destructor " << endl;
    }
};

class CHorse: public CAnimal
{
    int power;
public:
    CHorse(int pow=0, const char *strName="", int a=0, int w=0):CAnimal(strName, a, w)
    {
        power = pow;
        cout << "Horse constructor " << endl;
    }
    void Show()
    {
        CAnimal::Show();
        cout << "Power:" << power << endl;
    }
    void Run()
    {
        cout << "I can run! I run because I love to!!" << endl;
    }
    void Talk()
    {
        cout << "Whinny!..." << endl;
    }
    ~CHorse()
    {
        cout << "Horse destructor "  << endl;
    }
};

class CPegasus : public CHorse, public CBird
{
public:
    CPegasus(const char *strName="", int a=0, int w=0, int ws=0, int pow=0):
        CHorse(pow, strName, a, w), CBird(ws, strName, a, w)
    {
        cout << "Pegasus constructor" << endl;
    }
    /*void Show()
    {
         CBird::Show();
         CHorse::Show();
    }*/
    void Talk()
    {
        CHorse::Talk();
    }
    ~CPegasus()
    {
        cout << "Pegasus destructor" << endl;
    }
};

int main()
{
    CPegasus pegObj("Eagle", 5, 100, 2, 500);
    //pegObj.Show();
    //CBird *birdObj = &pegObj;
    //birdObj->Show();
    /*   pegObj.Fly();
       pegObj.Run();
       pegObj.Talk();
    */
    return 0;
}

