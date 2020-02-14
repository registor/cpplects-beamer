#include <iostream>

using namespace std;

class Person
{
public:
    Person() {}
    Person(string _name);
    virtual void Print();
    virtual ~Person(){}
protected:
    string szName;
};

Person::Person(string _name): szName(_name)
{

}

class Student: public Person
{
public:
    Student() {}
    Student(string _name, int _num);
    void Print();
protected:
    int iNumber;
};

void Person::Print()
{
    cout << "Person " << szName << endl;
}


Student::Student(string _name, int _num): Person(_name), iNumber(_num)
{

}

void Student::Print()
{
    cout << "Student " << szName << " "  << iNumber << endl;
}


class Teacher: public Person
{
protected:
    int iYear;
public:
    Teacher() {}
    Teacher(string _name, int _year);
    void Print();
};

Teacher::Teacher(string _name, int _year): Person(_name), iYear(_year)
{

}

void Teacher::Print()
{
    cout << "Teacher " << szName << " "  << iYear << endl;
}


class Graduate: public Student
{
public:
    Graduate() {}
    Graduate(string _name, int _num, string _res);
    void Print();
protected:
    string szResearch;
};

Graduate::Graduate(string _name, int _num, string _res):
    Student(_name, _num), szResearch(_res)
{

}

void Graduate::Print()
{
    cout << "Graduate " << szName << " " << iNumber << " "  << szResearch << endl;
}

int main()
{
    int n;
    cin >> n;
    Person **pPerson = new Person*[n];

    for(int i = 0; i < n; i++)
    {
        string type;
        cin >> type;
        if(type == "Person")
        {
            string name;
            cin >> name;
            pPerson[i] = new Person(name);
        }
        else if(type == "Student")
        {
            string name;
            int num;
            cin >> name >> num;
            pPerson[i] = new Student(name, num);
        }
        else if(type == "Teacher")
        {
            string name;
            int year;
            cin >> name >> year;
            pPerson[i] = new Teacher(name, year);
        }
        else if(type == "Graduate")
        {
            string name;
            int num;
            string field;
            cin >> name >> num >> field;
            pPerson[i] = new Graduate(name, num, field);
        }
    }

    string op;
    cin >> op;
    while(op != "exit")
    {
        //int idx = atoi(op.c_str());
        int idx = stoi(op);

        pPerson[idx]->Print();

        cin >> op;
    }

    for(int i = 0; i < n; i++)
    {
        if(pPerson[i] != NULL)
        {
            delete pPerson[i];
        }
    }

    delete [] pPerson;

    return 0;
}


