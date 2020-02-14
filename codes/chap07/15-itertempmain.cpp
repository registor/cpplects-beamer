//例07-15；ex07-15.cpp
//容器vector的使用实例，演示c++中容器vector的简单使用
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
