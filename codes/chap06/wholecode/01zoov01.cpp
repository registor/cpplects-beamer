// 例01zoov01：ex01zoov01.cpp
// 类之间的继承关系，继承，虚继承，多重继承的演示

#include <iostream>
#include <cstring>
#include <windows.h>
#include <mmsystem.h>

//注意要使用声音在linker settings配置里要加入“libwinmm.a”

using namespace std;

class CAnimal
{
    char name[32];
    int age;
    int weight;
public:
    CAnimal(const char *strName = "", int a = 0, int w = 0)
    {
        strcpy(name, strName);
        age = a;
        weight = w;
    }
    void Show()
    {
        cout << name << " " << age << " " << weight  << " ";
    }
};

class CBird: virtual public CAnimal
{
protected:
    int wingSpan;
public:
    CBird(const char *strName = "", int a = 0, int w = 0, int ws = 0): CAnimal(strName, a, w)
    {
        wingSpan = ws;
    }
    void Show()
    {
        CAnimal::Show();
        cout << wingSpan << endl;
    }
    void Talk()
    {
        cout << "Chirp..." << endl;
        PlaySound("Sound\\eagle.wav", NULL, SND_FILENAME | SND_SYNC);
    }
};

class CHorse: virtual public CAnimal
{
protected:
    int power;
public:
    CHorse(const char *strName = "", int a = 0, int w = 0, int pow = 0): CAnimal(strName, a, w)
    {
        power = pow;
    }
    void Show()
    {
        CAnimal::Show();
        cout << power << endl;
    }
    void Talk()
    {
        cout << "Whinny..." << endl;
        PlaySound("Sound\\horse.wav", NULL, SND_FILENAME | SND_SYNC);
    }
};

class CPegasus : public CHorse, public CBird
{
public:
    CPegasus(const char *strName = "", int a = 0, int w = 0, int ws = 0, int pow = 0):
        CAnimal(strName, a, w),
        CHorse(strName, a, w, pow),
        CBird(strName, a, w, ws)

    {
    }
    void Show()
    {
        CAnimal::Show();
        cout << wingSpan << " " << power << endl;
    }
    void Talk()
    {
        CHorse::Talk();
    }
};

class CBull: public CAnimal
{
    int power;
public:
    CBull(const char *strName = "", int a = 0, int w = 0, int pow = 0): CAnimal(strName, a, w)
    {
        power = pow;
    }
    void Show()
    {
        CAnimal::Show();
        cout << power << endl;
    }
    void Talk()
    {
        cout << "Moo..." << endl;
        PlaySound("Sound\\bull.wav", NULL, SND_FILENAME | SND_SYNC);
    }
};

int main()
{
    CBird birdObj("Eagle", 5, 50, 2);
    CHorse horObj("Mogolia horse", 5, 1000, 10000);
    CBull bullObj("Africa ox", 3, 2000, 20000);
    CPegasus pegObj("Pegasus", 5, 5000, 4, 100000);

    birdObj.Show();
    birdObj.Talk();

    horObj.Show();
    horObj.Talk();

    bullObj.Show();
    bullObj.Talk();

    pegObj.Show();
    pegObj.Talk();

    return 0;
}


