#include <iostream>
#include <stack>
#include <queue>

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

int main()
{
    StudentRecord temp;
    stack<StudentRecord> s;
    queue<StudentRecord> q;
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
            s.push(Record);
        }
        else if(str == "Pop")
        {
            if(!s.empty())
            {
                s.top().print();
                s.pop();
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
            q.push(Record);
        }
        else if(str == "DeQueue")
        {
            if(!q.empty())
            {
                q.front().print();
                q.pop();
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
