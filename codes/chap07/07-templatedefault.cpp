//例07-07；ex07-07.cpp
//在模板类的基础上写符号重载函数，演示c++的符号重载函数的书写方法
template <class T = int, int size = 10>
class CSafeArray
{
    T a[size];
public:
    CSafeArray()
    {
        int i;
        for(i = 0; i < size; i++)
            a[i] = i;
    }
    T &operator[](int i);
};
