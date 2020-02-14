//例07-10；ex07-10.cpp
//容器list的插入函数、迭代器的使用，演示c++中容器list的简单使用
#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main (){
    list<int> mylist;

    list<int>::iterator it;

    for (int i = 1; i <= 5; i++)  mylist.push_back(i);

    it = mylist.begin();
    ++it;

    mylist.insert (it, 10);
    mylist.insert (it, 2, 20);

    --it;

    vector<int> myvector (2, 30);
    mylist.insert (it, myvector.begin(), myvector.end());

    for (it = mylist.begin(); it != mylist.end(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;
}
