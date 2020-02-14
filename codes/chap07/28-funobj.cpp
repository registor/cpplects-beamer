//例07-28；ex07-28.cpp
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
