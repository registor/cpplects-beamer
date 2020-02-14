#include <iostream>
#include <string>
#include <list>

using namespace std;

struct StuNode
{
    string name;
    int ID;
    string univ;
    int score;
    StuNode(string _name = "", int _ID = 0, string _univ = "", int _score = 0)
        : name(_name), ID(_ID), univ(_univ), score(_score) {}
};

void ReadFile(list <StuNode> &buff)
{
    StuNode stu;

    cin >> stu.name;
    while(stu.name != "exit")
    {
        cin >> stu.ID;
        cin >> stu.univ;
        cin >> stu.score;
        buff.push_back(stu);
        cin >> stu.name;
    }
}

void PrintFile(const list <StuNode> &buff)
{
    list <StuNode>::const_iterator it;

    for (it = buff.begin(); it != buff.end(); it++)
    {
        cout << it->ID << "\t" << it->name << "\t"
             << it->univ << "\t" << it->score << endl;
    }
}

/*测试数据
James 10001  CMU  600
John  10003  Stanford 580
John  10003  Stanford 580
Barbara  10006 UCB 578
Alice 10002 MIT 595
exit
Susan  10009  GIT 553
William  10007  Princeton 572
Susan  10009  GIT  553
exit
*/
int main()
{
    list <StuNode> first, second;

    ReadFile(first);
    ReadFile(second);

    PrintFile(first);
    PrintFile(second);

    return 0;
}

