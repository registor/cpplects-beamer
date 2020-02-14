//容器vector中排序函数的使用，演示c++中容器vector中排序函数的高级使用
// sort algorithm example
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool myfunction (int i, int j)
{
    return (i < j);
}

struct myclass
{
    bool operator() (int i, int j)
    {
        return (i < j);
    }
} myobject;

int main ()
{
    int myints[] = {32, 71, 12, 45, 26, 80, 53, 33};
    vector<int> v (myints, myints + 8);             // 32 71 12 45 26 80 53 33
    vector<int>::iterator it;

    // using default comparison (operator <):
    sort (v.begin(), v.begin() + 4);         //(12 32 45 71)26 80 53 33

    // using function as comp
    sort (v.begin() + 4, v.end(), myfunction); // 12 32 45 71(26 33 53 80)

    // using object as comp
    sort (v.begin(), v.end(), myobject);     //(12 26 32 33 45 53 71 80)

    // print out content:
    cout << "v contains:";
    for (it = v.begin(); it != v.end(); ++it)
        cout << " " << *it;

    cout << endl;

    return 0;
}
