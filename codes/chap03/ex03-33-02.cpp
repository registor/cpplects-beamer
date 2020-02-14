// 例03-33-02：ex03-33-02.cpp
//  this 指针的值及其意义

int main()
{
    Point2D v0, v1;

    cout << "Address of Object v0:"
         << &v0 << endl;
    cout << "Address of Object v1:"
         << &v1 << endl;

    v0.Output();
    v1.Output();

    return 0;
}

