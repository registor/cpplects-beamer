// 例ex03-39：ex03-39.cpp
class  A
{
private:
    int  i ;
    void MemberFun(int) ;
    friend void FriendFun(A * , int) ;
} ;

|\textcolor{red}{\textbf{friend}}||\tikzmark{c\thepage}| void |\textcolor{red}{\textbf A::}|FriendFun(A * ptr , int x)
{
    ptr->i = x ;
}
void A::MemberFun( int x )
{
    i = x ;
}
