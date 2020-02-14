//例07-05；ex07-05.cpp
//符号重载函数的写法，
//演示c++的符号重载函数的写法
class CSafeArray
{
    int a[10];
public:
    CSafeArray()
    {
        for(int i = 0; i < 10; i++) 
            a[i] = i;
    }
    int &operator[](int i);
};
