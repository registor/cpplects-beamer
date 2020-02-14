#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <cstdlib>

using namespace std;

struct StuNode
{
    string name;
    int ID;
    string univ;
    int score;
    StuNode(string _name = "", int _ID = 0, string _univ = "", int _score = 0)
        : name(_name), ID(_ID), univ(_univ), score(_score) {}
    friend bool operator == (const StuNode &l, const StuNode &r)
    {
        return (l.ID == r.ID);
    }
    friend bool operator <(const StuNode &l, const StuNode &r)
    {
        return (l.ID < r.ID);
    }
};

void ReadFile(char *fileName, list <StuNode> &buff)
{
    ifstream inFile(fileName);
    StuNode stu;

    if(!inFile)
    {
        cout << fileName << " read error!" << endl;
        exit(0);
    };

    while(!inFile.eof())
    {
        inFile >> stu.name;
        inFile >> stu.ID;
        inFile >> stu.univ;
        inFile >> stu.score;
        buff.push_back(stu);
    }
    inFile.close();
}

void PrintFile(char *fileName, const list <StuNode> &buff)
{
    list <StuNode>::const_iterator it;
    ofstream outFile(fileName);

    if(!outFile) return;
    for (it = buff.begin(); it != buff.end(); it++)
    {
        outFile << it->ID << "\t" << it->name << "\t"
                << it->univ << "\t" << it->score << endl;
    }
    outFile.close();
}

int main()
{
    list <StuNode> first, second;

    ReadFile("first.txt", first);
    ReadFile("second.txt", second);

    first.sort();
    second.sort();

    first.merge(second);
    first.unique();

    PrintFile("result.txt", first);

    return 0;
}


