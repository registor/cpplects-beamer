// 例01-zoo-CPegasus：ex01-zoo-CPegasus.cpp
//定义一个类 CPegasus，多重继承

class CPegasus : public CHorse, public CBird
{
public:
    CPegasus(const char *strName = "", int a = 0, int w = 0, int ws = 0, int pow = 0):
        CAnimal(strName, a, w),
        CHorse(strName, a, w, pow),
        CBird(strName, a, w, ws)

    {
    }
    void Show()
    {
        CAnimal::Show();
        cout << wingSpan << " " << power << endl;
    }
    void Talk()
    {
        CHorse::Talk();
    }
};
