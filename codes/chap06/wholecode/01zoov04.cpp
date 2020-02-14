// 例01zoov04：ex01zoov04.cpp
// 类之间的继承关系，继承，虚继承，多重继承的演示

#include <iostream>
#include <cstring>
#include <windows.h>
#include <mmsystem.h> //注意要使用声音在linker settings配置里要加入“libwinmm.a”

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

    virtual void Show();
    virtual void Talk();
};

void CAnimal::Show()
{
    cout << name << " " << age << " " << weight  << " ";
}
void CAnimal::Talk()
{
    cout << "Do nothing!" << endl;
}

//virtual base class
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
        PlaySound("eagle.wav", NULL, SND_FILENAME | SND_SYNC);
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
        PlaySound("horse.wav", NULL, SND_FILENAME | SND_SYNC);
    }
};

//Multi-inheritence
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
        PlaySound("bull.wav", NULL, SND_FILENAME | SND_SYNC);
    }
};

const int MAX_ANIM_NUM = 100;

class CZoo
{
    int size;
    CAnimal *m_animal[MAX_ANIM_NUM];
public:
    CZoo()
    {
        size = 0;
    }
    void Add(CAnimal *anim)
    {
        if(size < MAX_ANIM_NUM)
        {
            m_animal[size] = anim;
            size++;
        }
    };
    void Show();
    void Talk();
};

void CZoo::Show()
{
    for (int i = 0; i < size; i++)
        m_animal[i]->Show();
}

void CZoo::Talk()
{
    for (int i = 0; i < size; i++)
        m_animal[i]->Talk();
}

int main()
{
    CBird birdObj("Eagle", 5, 50, 2);
    CHorse horObj("Mogolia horse", 5, 1000, 10000);
    CBull bullObj("Africa ox", 3, 2000, 20000);
    CPegasus pegObj("Pegasus", 5, 5000, 4, 100000);

    CZoo zoo;

    zoo.Add(&birdObj);
    zoo.Add(&horObj);
    zoo.Add(&bullObj);
    zoo.Add(&pegObj);

    zoo.Show();

    zoo.Talk();

    return 0;
}

