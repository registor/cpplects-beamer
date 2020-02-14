// 例05-11：ex05-11.cpp
//定义一个类 CBird ，该类继承CAnimal类，并且增加了wingSpan属性和一些方法

class CBird: public CAnimal
{
    int wingSpan;
public:
    CBird(int ws=0, const char *strName="", int a=0, int w=0):
          CAnimal(strName, a, w)
    {
        wingSpan = ws;
        cout << "Bird constructor " << endl;
    }
    void Show(){
        CAnimal::Show();
        cout << "Wingspan:" << wingSpan << endl;
    }
    void Fly(){
        cout << "I can fly! I can fly!!" << endl;
    }
    void Talk(){
        cout << "Chirp..." << endl;
    }
    ~CBird(){
        cout << "Bird destructor " << endl;
    }
};
