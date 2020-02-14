// 例01-zoo-CBird：ex01-zoo-CBird.cpp
// 虚继承的演示

class CBird: virtual public CAnimal
{
protected:
    int wingSpan;
public:
    CBird(const char *strName = "", int a = 0, int w = 0, int ws = 0):
         CAnimal(strName, a, w)
    {
        wingSpan = ws;
    }
    void Show()
    {
        CAnimal::Show();
        cout << wingSpan << endl;
    }
    void Talk()
    {
        cout << "Chirp..." << endl;
        PlaySound("Sound\\eagle.wav", NULL, SND_FILENAME | SND_SYNC);
    }
};
