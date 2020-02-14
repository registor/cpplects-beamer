// 例03-49：ex03-49.cpp

float CPoint2D::GetY() const
{
    return y;
}
int main()
{
    const CPoint2D p(1, 2);
    float x = p.GetX();
    float y = p.GetY();
}
