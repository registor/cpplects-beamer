//例07-05；ex07-05.cpp
//在模板类的基础上写符号重载函数，
//演示c++的符号重载函数的书写方法
template <class T, int size>
class CSafeArray
{
    T a[size];
public:
    CSafeArray()
    {
        for(int i = 0; i < size; i++) 
            a[i] = i;
    }
    T &operator[](int i);
};
