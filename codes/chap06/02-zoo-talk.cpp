// 例02-zoo-talk：ex02-zoo-talk.cpp
// 实现动物园的Talk方法

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
