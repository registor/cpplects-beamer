// 例03-17：ex03-17.cpp
// 类中成员（数据或函数）默认权限为 private
// 成员函数也可以在类定义中实现

class Stash
{
    int size; // Number of a spaces
    int next; // Next empty space
    int *a;// Dynamically allocated arrays
    void inflate(int increase);
public:
    int add(int element)
    {
        if(next >= size)
            inflate(increment);

        a[next] = element;
        next++;
        return(next - 1);
    }
};

