//例07-02；ex07-02.cpp
//模板类的写法，演示c++的简单模板类的写法
template <class T, int size>
class CSafeArray
{
    T a[size];
public:
    CSafeArray()
    {
        for(int i = 0; i < size; i++) a[i] = i;
    }
    T &operator[](int i)
    {
        if(i < 0 || i > size - 1)
        {
            cout << "Index value of " << i << " is out-of-bounds.\n";
            exit(1);
        }
        return a[i];
    }
};

