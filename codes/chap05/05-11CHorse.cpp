// 例05-11：ex05-11.cpp
//定义一个类 CHorse ，该类继承CAnimal类，并且增加了power属性和一些方法

class CHorse: public CAnimal
{
    int power;
public:
    CHorse(int pow=0, const char *strName="", int a=0, int w=0):
           CAnimal(strName, a, w)
    {
        power = pow;
        cout << "Horse constructor " << endl;
    }
    void Show(){
        CAnimal::Show();
        cout << "Power:" << power << endl;
    }
    void Run(){
        cout << "I can run! I run because I love to!!" << endl;
    }
    void Talk(){
        cout << "Whinny!..." << endl;
    }
    ~CHorse(){
        cout << "Horse destructor "  << endl;
    }
};
