// 例03-40：ex03-40.cpp
// 类友元函数的定义及实现

class  A
{
private:
    int  i ;
    void MemberFun(int);
    friend void FriendFun(A * , int);
};

void FriendFun(A * ptr , int x)
{
    |\textcolor{red}{\textbf i = x}|;|\tikzmark{c\thepage}|
}
void A::MemberFun(int x)
{
    i = x;
}
