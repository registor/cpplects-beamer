#include <iostream>

using namespace std;

class base1
{
protected:
    int x;
public:
    void showx()
    {
        cout << x << "\n";
    }
};

class base2
{
protected:
    int y;
public:
    void showy()
    {
        cout << y << "\n";
    }
};

class derived: public base1, public base2
{
public:
    void set(int i, int j)
    {
        x=i;
        y=j;
    }
};


int main()
{
    derived ob;
    ob.set(10, 20);
    ob.showx();
    ob.showy();
}

