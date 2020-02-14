#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void myfunction (int i){
    cout << " " << i;
}

struct myclass{
    void operator() (int i)
    {
        cout << " " << i;
    }
} myobject;

int main (){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "v contains:";
    for_each (v.begin(), v.end(), myfunction);

    // or:
    cout << "\nv contains:";
    for_each (v.begin(), v.end(), myobject);

    cout << endl;

    return 0;
}
