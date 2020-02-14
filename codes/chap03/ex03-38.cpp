// 例ex03-38：ex03-38.cpp
class  A
{
private:
    int  i ;
    void MemberFun(int) ;
    friend void FriendFun(A * , int);|\tikzmark{c\thepage}|
} ;

void FriendFun(A * ptr , int x)|\tikzmark{d\thepage}|
{
    ptr -> i = x ;
}
void A::MemberFun( int x )
{
    i = x ;
}
