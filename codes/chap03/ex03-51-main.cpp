// 例ex03-51-main.cpp
float CPoint2D::GetY() const
{
    return y;
}
int main()
{
    const CPoint2D p(1, 2);
    float x = p.GetX|\tikzmark{d\thepage}|();
    float y = |\tikzmark{e\thepage}| p.GetY();
}
