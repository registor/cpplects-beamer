struct Solution
{
    double x1, x2;
    Solution(double x1 = 0, double x2 = 0)
    {
        this->x1 = x1;
        this->x2 = x2;
    }
    friend ostream &operator<<(ostream &out, Solution s)
    {
        if(s.x1 == s.x2)
            out << "x1=x2=" << s.x1;
        else
            out << "x1=" << s.x1 << "," << "x2=" << s.x2;
        return out;
    }
};

Solution FindRoots(double a, double b, double c)
{
    double x1, x2;

    if(abs(a) < 1.0e-8)
    {
        if(abs(b) < 1.0e-8)
            throw a;
        else
            return Solution(-c / b, -c / b);
    }
    if((b * b - 4 * a * c) < 0) throw (b * b - 4 * a * c);
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    return Solution(x1, x2);
}
