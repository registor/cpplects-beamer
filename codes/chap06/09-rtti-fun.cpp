// 例09-rtti-fun：ex09-rtti-fun.cpp
// 动态类型转换的演示

void my_function(CBase* my_a)
{
    CDerived *my_b = dynamic_cast<CDerived*>(my_a);
    if(my_b != NULL)
        my_b->methodDerived();
    else
        my_a->methodBase();
}
