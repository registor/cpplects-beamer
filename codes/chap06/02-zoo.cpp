// 例02-zoo：ex02-zoo.cpp

class CZoo
{
    int sizeBird, sizeHorse, sizeBull, sizePeg;
    CBird *m_bird;
    CHorse *m_horse;
    CBull *m_bull;
    CPegasus *m_peg;
public:
    CZoo()
    {
        sizeBird = sizeBull = sizeHorse = sizePeg = 0;
    }
    void AddBird(CBird &bird) {}
    void AddBull(CBull &bull) {}
    void AddHorse(CHorse &hor) {}
    void AddPegasus(CPegasus &peg) {}
    void Show();
    void Talk();
};
