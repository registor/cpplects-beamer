struct StuNode
{
    string name;
    int ID;
    string univ;
    int score;
    StuNode(string _name = "", int _ID = 0, string _univ = "", int _score = 0)
        : name(_name), ID(_ID), univ(_univ), score(_score) {}
    friend bool operator == (const StuNode &l, const StuNode &r)
    {
        return (l.ID == r.ID);
    }
    friend bool operator <(const StuNode &l, const StuNode &r)
    {
        return (l.ID < r.ID);
    }
};

