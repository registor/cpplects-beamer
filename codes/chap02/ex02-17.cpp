// 例02-17：ex02-17.cpp
template <class T1, class T2>
void myfunc(T1 x, T2 y)
{
    cout << x << ' ' << y << endl;
}

int main()
{
    myfunc(10, "I hate C++");
    myfunc(98.6, 19L);
}
