//定义PersonSortClass类
#include <iostream>
#include <string>
#include <set>

using namespace std;
struct Person
{
    string fName;
    string lName;
    Person(string gName = "", string fName = ""):
        fName(gName), lName(fName) {}
};

class PersonSortClass
{
public:
    bool operator() (const Person& p1, const Person& p2)
    {
        if (p1.lName < p2.lName)
            return true;
        else if(p1.lName == p2.lName)
            return (p1.fName < p2.fName);
        else
            return false;
    }
};

bool PersonSortFun(const Person& p1, const Person& p2)
{
    if (p1.lName < p2.lName)
        return true;
    else if(p1.lName == p2.lName)
        return (p1.fName < p2.fName);
    else
        return false;
}

//在容器set中插入元素，演示c++中set容器的高级用法
int main()
{
    typedef set<Person, PersonSortClass> PersonSet;
    PersonSet s;
    PersonSet::iterator p;

    s.insert(Person("Thomas  ", "Edison"));
    s.insert(Person("Helen     ", "Keller"));
    s.insert(Person("James    ", "Taylor"));
    s.insert(Person("Elizabeth", "Taylor"));
    s.insert(Person("Isaac      ", "Newton"));
    s.insert(Person("Lewis      ", "Carrol"));

    for (p = s.begin(); p != s.end(); ++p)
        cout << (*p).fName << "\t" << (*p).lName << endl;

    return 0;
}

