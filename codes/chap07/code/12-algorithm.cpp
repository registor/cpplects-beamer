#include <iostream>
#include <vector>
#include <deque>
#include <list>

using namespace std;

template <class ITER, class T>
ITER Find(ITER first, ITER last, T value)
{
    while(first != last && *first != value)
        ++first;
    return first;
}

template <class ITER>
void Print(ITER first, ITER last)
{
    while(first != last)
    {
        cout << *first << " ";
        ++first;
    }
    cout << endl;
}

typedef vector <int> container;
typedef vector <int>::iterator iterCon;

int main()
{
    container v;
    iterCon where;
    int key = 10;

    for(int i = 0; i < 10; i++)
        v.push_back(i);

    where = Find(v.begin(), v.end(), key);

    if(where != v.end())
        cout << *where << endl;
    else
        cout << "Fail to find the value!" << endl;

    Print(v.begin(), v.end());

    return 0;
}
