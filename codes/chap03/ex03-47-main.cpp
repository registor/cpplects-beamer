// 例03-47：ex03-47.cpp

int main()
{
    const CPoint2D p1(1, 2);
    p1.Translate(1, 1);|\badmark|

    CPoint2D p2;
    p1 = p2;|\badmark|
}
