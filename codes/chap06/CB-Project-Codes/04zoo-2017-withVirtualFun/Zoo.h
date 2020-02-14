#ifndef ZOO_H_INCLUDED
#define ZOO_H_INCLUDED

class CAnimal;

const int MAX_ANIM_NUM = 100;

class CZoo
{
public:
    CZoo();

    void Add(CAnimal *anim);

    void Show();
    void Talk();

private:
    int size;
    CAnimal *m_animal[MAX_ANIM_NUM];
};



#endif // ZOO_H_INCLUDED
