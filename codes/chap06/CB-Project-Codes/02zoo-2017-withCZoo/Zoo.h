#ifndef ZOO_H_INCLUDED
#define ZOO_H_INCLUDED

class CBird;
class CHorse;
class CBull;
class CPegasus;

class CZoo
{
public:
    CZoo();

    void AddBird(CBird &bird);
    void AddBull(CBull &bull);
    void AddHorse(CHorse &hor);
    void AddPegasus(CPegasus &peg);

    void Show();
    void Talk();

private:
    int sizeBird, sizeHorse, sizeBull, sizePeg;
    CBird *m_bird;
    CHorse *m_horse;
    CBull *m_bull;
    CPegasus *m_peg;
};



#endif // ZOO_H_INCLUDED
