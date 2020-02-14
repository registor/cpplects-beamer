// 例02-zoo-show：ex02-zoo-show.cpp
// 实现动物园的Show方法

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
