// 例05-10：ex05-10.cpp
//定义类derived，该类继承了base1和base2

class derived: public base1, public base2{
public:
    derived()    {
        cout << "Constructing derived\n";
    }
    ~derived()    {
        cout << "Destructing derived\n";
    }
};

int main(){
    derived ob;
}

