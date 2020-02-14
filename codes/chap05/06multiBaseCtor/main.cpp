#include <iostream>

using namespace std;

class base1
{
public:
    base1()
    {
        cout << "Constructing base1\n";
    }
    ~base1()
    {
        cout << "Destructing base1\n";
    }
};

class base2
{
public:
    base2()
    {
        cout << "Constructing base2\n";
    }
    ~base2()
    {
        cout << "Destructing base2\n";
    }
};

class derived: public base1, public base2
{
public:
    derived()
    {
        cout << "Constructing derived\n";
    }
    ~derived()
    {
        cout << "Destructing derived\n";
    }
};

int main()
{
    derived ob;
}
