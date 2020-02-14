#include <iostream>
#include <stdlib.h>

using namespace std;

class Vect
{
public:
    //默认构造函数
    Vect(int _l = 0);
    // 内置整型数组构造
    Vect(int *_pa, int _l);
    //拷贝构造函数
    Vect(const Vect& _v);

    void setIthVal(int x, int i);

    friend ostream& operator<<(ostream& os, const Vect& c);
    ~Vect();

    int getVectLen()
    {
        return len;
    }
private:
    int *pa, len;
};

//默认构造函数
Vect::Vect(int _l)
{
    if(_l <= 0)
    {
        len = 0;
        pa = NULL;
    }
    else
    {
        len = _l;
        pa = new int[len];
        for(int i = 0; i < len; i++)
        {
            pa[i] = 0;
        }
    }
}

// 内置整型数组构造
Vect::Vect(int *_pa, int _l)
{
    if(_pa != NULL)
    {
        len = _l;
        pa = new int[len];
        for(int i = 0; i < len; i++)
        {
            pa[i] = _pa[i];
        }
    }
    else
    {
        len = 0;
        pa = NULL;
    }
}

// 拷贝构造函数(实现深拷贝)
Vect::Vect(const Vect& _v)
{
    if(_v.len != 0)
    {
        len = _v.len;
        pa = new int[len];
        for(int i = 0; i < len; i++)
        {
            pa[i] = _v.pa[i];
        }
    }
    else
    {
        len = 0;
        pa = NULL;
    }
}

// 重载下标运算符实现指定位置元素的存取
void Vect::setIthVal(int x, int i)
{
    if(i < 0 || i > len - 1)
    {
        cout << "out of boundary" << endl;
    }
    else
    {
        pa[i] = x;
    }
}

//重载输出运算符
ostream& operator<<(ostream& os, const Vect& v)
{
    for(int i = 0; i < v.len - 1; i++)
    {
        os << v.pa[i] << " " ;
    }
    os << v.pa[v.len - 1] << endl;

    return os;
}

Vect::~Vect()
{
    delete [] pa;
}

int main()
{
    // 内置的静态整型数组
    int a[] = {1, 2, 3, 4, 5};
    Vect v1(a, sizeof(a) / sizeof(a[0]));

    int i = 0, n = 0, x = 0;

    cin >> n;
    Vect v2(n);
    cout << v1 << v2;
    cin >> i >> x;
    v1.setIthVal(x, i);

    Vect v3(v1);

    cout << v1 << v3;

    return 0;
}
