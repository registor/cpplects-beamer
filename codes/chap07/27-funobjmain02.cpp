//例07-27；ex07-27.cpp
//输出AddFun处理过后的容器中的值，演示c++中for_each的使用
int main()
{
    vector<int> v(10, 0);
    const int n = 10;

    for_each (v.begin(), v.end(), AddFun<int, n>);
    //for_each (v.begin(), v.end(), AddClass<int>(n));
    for_each (v.begin(), v.end(), Print);
    cout << endl;
    for_each (v.begin(), v.end(), AddFun < int, n + 1 > );
    //for_each (v.begin(),v.end(), AddClass<int>(n+1));
    for_each (v.begin(), v.end(), Print);
    cout << endl;
}
