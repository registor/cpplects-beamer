//对各类容器的排序进行比较，演示c++中各类容器的使用
#include <iostream>
#include <list>
#include <vector>
#include <set>
#include <algorithm>
#include <ctime>
#include <iterator>

using namespace std;

bool compare(int i, int j)
{
    return (i > j);
}

int main()
{
    const int sz = 10000000;
    const int top100 = 100;

    vector<int> origin;
    for(int i = 0; i < sz; i++)
        origin.push_back(i);

    random_shuffle (origin.begin(), origin.end());
    //copy(origin.begin(), origin.end(), ostream_iterator<int>(cout, "\t"));

    list<int> lo;
    for(int i = 0; i < sz; i++)
        lo.push_back(origin[i]);
    clock_t ticks = clock();
    lo.sort();
    //copy(lo.begin(), lo.end(), ostream_iterator<int>(cout, "\t"));
    cout << "list sort:" << clock() - ticks << "ms" << endl;

    multiset<int> so;
    ticks = clock();
    for(int i = 0; i < sz; i++)
        so.insert(origin[i]);
    //copy(so.begin(), so.end(), ostream_iterator<int>(cout, "\t"));
    cout << "set sort:" << clock() - ticks << "ms" << endl;

    vector<int>vo;
    for(int i = 0; i < sz; i++)  vo.push_back(origin[i]);
    ticks = clock();
    sort(vo.begin(), vo.end());
    //copy(vo.begin(), vo.end(), ostream_iterator<int>(cout, "\t"));
    cout << "vector sort:" << clock() - ticks << "ms" << endl;

    for(int i = 0; i < sz; i++)  vo[i] = origin[i];
    ticks = clock();
    make_heap (vo.begin(), vo.end());
    sort_heap(vo.begin(), vo.end());
    //copy(vo.begin(), vo.end(), ostream_iterator<int>(cout, "\t"));
    cout << "heap sort:" << clock() - ticks << "ms" << endl;

    for(int i = 0; i < sz; i++) vo[i] = origin[i];
    ticks = clock();
    partial_sort (vo.begin(), vo.begin() + top100, vo.end());
    copy(vo.begin(), vo.begin() + top100, ostream_iterator<int>(cout, "\t"));
    cout << "partial_sort top100:" << clock() - ticks << "ms" << endl;

    return 0;
}
