#include <iostream>

using namespace std;

class StudentRecord
{
public:
    StudentRecord();
    StudentRecord(string _name, int _no);
    void print();
public:
    string stuName;
    int stuNo;
};

StudentRecord::StudentRecord(): stuName(""), stuNo(0)
{

}

StudentRecord::StudentRecord(string _name, int _no):
    stuName(_name), stuNo(_no)
{

}

void StudentRecord::print()
{
    cout << "Name: " << stuName << ", Number: " << stuNo << endl;
}

class StudentNode
{
public:
    StudentNode(StudentRecord &s): data(s), next(NULL)
    {
        //data = s;
    }
public:
    StudentRecord data;
    StudentNode *next;
};

class LinkList
{
public:
    LinkList(): head(NULL), tail(NULL) {}
    void insert_front(StudentRecord stu);
    void insert_back(StudentRecord stu);
    void insert_pos(int pos, StudentRecord stu);
    StudentRecord del_front();
    StudentRecord del_back();
    StudentRecord del_pos(int p);
    StudentRecord get_front();
    StudentRecord get_back();
    StudentNode *get_head();
    StudentNode *get_insertpos(int i);
    void del_clear();
    bool is_empty();
    ~LinkList()
    {
        del_clear();
    }
    int get_length()
    {
        return len;
    }
private:
    StudentNode *head;
    StudentNode *tail;
    static int len;   //对链表的长度进行累积
};
// 在表头插入
void LinkList::insert_front(StudentRecord stu)
{
    StudentNode *p = new StudentNode(stu);
    p->next = head;
    if(head == NULL)
    {
        head = p;
        tail = p;
    }
    else
    {
        p->next = head;
        head = p;
    }
    ++len;
}
// 在表尾插入
void LinkList::insert_back(StudentRecord stu)
{
    StudentNode *p = new StudentNode(stu);
    if(head == NULL)
    {
        head = p;
        tail = p;
    }
    else
    {
        tail->next = p;
        tail = p;
        tail->next = NULL;
    }
    ++len;
}

// 在p位置插入
void LinkList::insert_pos(int pos, StudentRecord stu)
{
    StudentNode *p = new StudentNode(stu);
    StudentNode *q = head;

    StudentNode *pi = get_insertpos(pos);
    if(pi == NULL)
    {
        return;
    }
    else
    {
        if(q == pi) //输入的位置为1
        {
            insert_front(stu);
        }
        else
        {
            while(q->next != pi)
            {
                q = q->next;
            }
            q->next = p;
            p->next = pi;
            ++len;
        }
    }
}

// 头删除并返回第1个元素
StudentRecord LinkList::del_front()
{
    StudentRecord temp;
    StudentNode *del;
    del = head;
    if(del == NULL)
    {
        return temp;
    }

    head = head->next;
    //del->data.print();
    temp = del->data;
    delete del;

    --len;

    return temp;
}

// 尾删除并返回最后一个元素
StudentRecord LinkList::del_back()
{
    StudentRecord temp;
    StudentNode *del;
    del = head;
    if(head == NULL)
    {
        return temp;
    }

    while(del->next != tail)
    {
        del = del->next;
    }

    temp = tail->data;
    delete tail;
    tail = del;
    tail->next = NULL;
    --len;

    return temp;
}

StudentRecord LinkList::del_pos(int p)
{
    StudentRecord temp;
    StudentNode *s = head;
    StudentNode *q = get_insertpos(p);
    if(q == NULL)
    {
        return temp;
    }
    else
    {
        if(s == q)
        {
            del_front();
        }
        else
        {
            while(s->next != q)
            {
                s = s->next;
            }
            s->next = q->next;
            temp = q->data;
            delete q;
            q = NULL;
        }
    }
    --len;
    return temp;
}

StudentRecord LinkList::get_front()
{
    StudentRecord temp;

    if(head == NULL)
    {
        return temp;
    }

    return head->data;
}
StudentRecord LinkList::get_back()
{
    StudentRecord temp;

    if(tail == NULL)
    {
        return temp;
    }
    return tail->data;
}

StudentNode *LinkList::get_head()         //获得头指针
{
    if(head == NULL)
    {
        return NULL;
    }
    else
    {
        return head;
    }
}

StudentNode *LinkList::get_insertpos(int i)
{
    StudentNode *q = head;
    if(i <= 0)
    {
        cout << "输入位置不合法！" << endl;
        return NULL;
    }
    else if(i > get_length())
    {
        cout << "输入位置大于链表长度！" << endl;
        return NULL;
    }
    else
    {
        int n = 1;
        while( n != i)
        {
            q = q->next;
            n++;
        }
        return q;
    }
}

void LinkList::del_clear()
{
    StudentNode *p = head;

    while(head != NULL)
    {
        head = p->next;
        delete p;
        p = head;
    }
    len = 0;
}

bool LinkList::is_empty()
{
    if(len == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

class LinkedStack: public LinkList
{
public:
    void Push(StudentRecord record)
    {
        insert_front(record);
    }
    bool Pop(StudentRecord &record)
    {
        if(is_empty())
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

class LinkedQueue: public LinkList
{
public:
    void EnQueue(StudentRecord record)
    {
        insert_back(record);
    }
    bool DeQueue(StudentRecord &record)
    {
        if(is_empty())
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

// 静态成员初始化
int LinkList::len = 0;

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

