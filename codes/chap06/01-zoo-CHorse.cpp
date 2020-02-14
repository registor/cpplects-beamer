// 例01-zoo-CHorse：ex01-zoo-CHorse.cpp
// 虚继承的演示

class CHorse: virtual public CAnimal
{
protected:
    int power;
public:
    CHorse(const char *strName = "", int a = 0, int w = 0, int pow = 0):
           CAnimal(strName, a, w)
    {
        power = pow;
    }
    void Show()
    {
        CAnimal::Show();
        cout << power << endl;
    }
    void Talk()
    {
        cout << "Whinny..." << endl;
        PlaySound("Sound\\horse.wav", NULL, SND_FILENAME | SND_SYNC);
    }
};
