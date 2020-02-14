// 例03-zoo-class：ex03-zoo-class.cpp

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
    }
    void Show();
    void Talk();
};
