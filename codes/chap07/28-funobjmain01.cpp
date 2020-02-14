//例07-28；ex07-28.cpp
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
}

