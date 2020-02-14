// 例01-zoo-CBull：ex01-zoo-CBull.cpp
// 继承的演示

class CBull: public CAnimal
{
    int power;
public:
    CBull(const char *strName = "", int a = 0, int w = 0, int pow = 0):
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
        cout << "Moo..." << endl;
        PlaySound("Sound\\bull.wav", NULL, SND_FILENAME | SND_SYNC);
    }
};
