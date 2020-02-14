// 例03-48：ex03-48.cpp

class A
{
private:
    const int& r;         //常引用数据成员
    const int a;          //常数据成员
    static const  int b;   //静态常数据成员
public:
    A(int i): a(i), r(a)
    {
        cout << "constructor!" << endl;
    };
    void display()
    {
        cout << a << "," << b << "," << r << endl;
    }
};
