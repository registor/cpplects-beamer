// 例03-zoo-show-talk：ex03-zoo-show-talk.cpp
//  实现类中的成员函数

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
