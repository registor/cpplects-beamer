// 例05-11：ex05-11.cpp
//定义类 CPegasus ，该类继承CHorse和CBird

class CPegasus : public CHorse, public CBird
{
public:
    CPegasus(const char *strName="", int a=0, int w=0, int ws=0, int pow=0):
        CHorse(pow, strName, a, w), CBird(ws, strName, a, w)
    {
        cout << "Pegasus constructor" << endl;
    }
    void Talk(){
        CHorse::Talk();
    }
    ~CPegasus(){
        cout << "Pegasus destructor" << endl;
    }
};

int main(){
    CPegasus pegObj("Eagle", 5, 100, 2, 500);

    return 0;
}

