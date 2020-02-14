#include "Zoo.h"
#include "Bird.h"
#include "Horse.h"
#include "Pegasus.h"
#include "Bull.h"

CZoo::CZoo():sizeBird(0), sizeHorse(0), sizeBull(0), sizePeg(0)
{

}

void CZoo::AddBird(CBird &bird)
{
    ;
}
void CZoo::AddBull(CBull &bull)
{
    ;
}
void CZoo::AddHorse(CHorse &hor)
{
    ;
}
void CZoo::AddPegasus(CPegasus &peg)
{
    ;
}
void CZoo::Show()
{
    for (int i = 0; i < sizeBird; i++)
        m_bird[i].Show();
    for (int i = 0; i < sizeHorse; i++)
        m_horse[i].Show();
    for (int i = 0; i < sizeBull; i++)
        m_bull[i].Show();
    for (int i = 0; i < sizePeg; i++)
        m_peg[i].Show();
}
void CZoo::Talk()
{
    for (int i = 0; i < sizeBird; i++)
        m_bird[i].Talk();
    for (int i = 0; i < sizeHorse; i++)
        m_horse[i].Talk();
    for (int i = 0; i < sizeBull; i++)
        m_bull[i].Talk();
    for (int i = 0; i < sizePeg; i++)
        m_peg[i].Talk();
}
