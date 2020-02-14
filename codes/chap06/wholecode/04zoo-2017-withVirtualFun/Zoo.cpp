#include "Zoo.h"
#include "Bird.h"
#include "Horse.h"
#include "Pegasus.h"
#include "Bull.h"

CZoo::CZoo():size(0)
{

}

void CZoo::Add(CAnimal *anim)
{
    if(size < MAX_ANIM_NUM)
    {
        m_animal[size] = anim;
        size++;
    }
}


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
