// 例03-05：ex03-05.cpp
// 创建结构体 Stash 的实例，
// 调用函数 addData

int main()
{
    Stash buff(NULL, 0);
    for (int i = 0; i < 100; i++)
        addData(buff, 100 - i);
}
