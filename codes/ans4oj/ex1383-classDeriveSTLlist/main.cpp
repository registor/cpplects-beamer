#include <iostream>
#include <list>

using namespace std;

class StudentRecord
{
public:
    StudentRecord(string _name = "", int _no = 0);
    void print();
public:
    string stuName;
    int stuNo;
};

StudentRecord::StudentRecord(string _name, int _no):
    stuName(_name), stuNo(_no)
{

}

void StudentRecord::print()
{
    cout << "Name: " << stuName << ", Number: " << stuNo << endl;
}

//the LinkedList class
class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
    void insert_front(StudentRecord stu); //在表头插入元素x
    void insert_back(StudentRecord stu); //在表尾插入元素x
    StudentRecord del_front(); //删除并返回第一个元素
    StudentRecord del_back(); //删除并返回最后一个元素
    StudentRecord front(); //返回第一个元素
    StudentRecord back(); //返回最后一个元素
    bool empty(); //判断链表是否为空
private:
    list<StudentRecord> lst;
};

LinkedList::LinkedList()
{
    lst.clear();
}
LinkedList::~LinkedList()
{
    lst.clear();
}

void LinkedList::insert_front(StudentRecord stu)
{
    lst.push_front(stu);
}

void LinkedList::insert_back(StudentRecord stu)
{
    lst.push_back(stu);
}

StudentRecord LinkedList::del_front()
{
    StudentRecord temp;
    if(lst.empty())
    {
        return temp;
    }
    temp = lst.front();
    lst.pop_front();
    return temp;
}

StudentRecord LinkedList::del_back()
{
    StudentRecord temp;
    if(lst.empty())
    {
        return temp;
    }

    temp = lst.back();
    lst.pop_back();
    return temp;
}

StudentRecord LinkedList::front()
{
    return lst.front();
}

StudentRecord LinkedList::back()
{
    return lst.back();
}

bool LinkedList::empty()
{
    return lst.empty();
}

class LinkedStack : public LinkedList
{
public:
    void Push(StudentRecord record)
    {
        insert_front(record);
    }
    bool Pop(StudentRecord &record)
    {
        if(empty())
        {
            return false;
        }
        else
        {
            record = del_front();
            return true;
        }
    }
};

class LinkedQueue : public LinkedList
{
public:
    void EnQueue(StudentRecord record)
    {
        insert_back(record);
    }
    bool DeQueue(StudentRecord &record)
    {
        if(empty())
        {
            return false;
        }
        else
        {
            record = del_front();
            return true;
        }
    }
};

int main()
{
    StudentRecord temp;
    LinkedQueue q;
    LinkedStack s;
    string str;
    cin >> str;
    while(str != "Exit")
    {
        if(str == "Push")
        {
            string name;
            int no;
            cin >> name >> no;
            StudentRecord Record(name, no);
            s.Push(Record);
        }
        else if(str == "Pop")
        {
            if(s.Pop(temp))
            {
                temp.print();
            }
            else
            {
                cout << "Stack is empty!" << endl;
            }
        }
        else if(str == "EnQueue")
        {
            string name;
            int no;
            cin >> name >> no;
            StudentRecord Record(name, no);
            q.EnQueue(Record);
        }
        else if(str == "DeQueue")
        {
            if(q.DeQueue(temp))
            {
                temp.print();
            }
            else
            {
                cout << "Queue is empty!" << endl;
            }
        }
        else
        {
            cout << "Input error!" << endl;
        }
        cin >> str;
    }

    return 0;
}
