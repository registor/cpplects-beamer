#include <iostream>

using namespace std;
class Rational
{
public:
    Rational(int _up, int _down);

    const Rational operator-()
    {
        return Rational(-iUp, iDown);
    }
    const Rational& operator=(Rational&pB)
    {
        iUp = pB.iUp;
        iDown = pB.iDown;
        return *this;
    }
    const Rational& operator++()
    {
        iUp += iDown;
        return *this;
    }//后置加加
    const Rational operator++(int)
    {
        Rational before(iUp, iDown);
        iUp += iDown;
        return before;
    }//后置加加
    const Rational& operator--()
    {
        iUp -= iDown;
        return *this;
    }
    const Rational operator--(int)
    {
        Rational before(iUp, iDown);
        iUp -= iDown;

        return before;
    }
    friend Rational operator+(Rational pA, Rational pB)
    {
        Rational P( pA.iUp * pB.iDown + pB.iUp * pA.iDown, pA.iDown * pB.iDown);
        return P;
    }
    friend Rational operator-(Rational pA, Rational pB)
    {
        Rational P(pA.iUp * pB.iDown - pB.iUp * pA.iDown, pA.iDown * pB.iDown);
        return P;
    }
    friend Rational operator*(Rational pA, Rational pB)
    {
        Rational P(pA.iUp * pB.iUp, pA.iDown * pB.iDown);
        return P;
    }
    friend Rational operator/(Rational pA, Rational pB)
    {
        Rational P(pA.iUp * pB.iDown, pA.iDown * pB.iUp);
        return P;
    }
    friend bool operator<(Rational a, Rational b)
    {
        int temp = a.iUp * b.iDown - b.iUp * a.iDown;

        return temp < 0 ? true : false;
    }
    friend bool operator<=(Rational a, Rational b)
    {
        int temp = a.iUp * b.iDown - b.iUp * a.iDown;

        return temp <= 0 ? true : false;
    }
    friend bool operator>(Rational a, Rational b)
    {
        int temp = a.iUp * b.iDown - b.iUp * a.iDown;

        return temp > 0 ? true : false;
    }
    friend bool operator>=(Rational a, Rational b)
    {
        int temp = a.iUp * b.iDown - b.iUp * a.iDown;

        return temp >= 0 ? true : false;
    }
    friend ostream& operator<<(ostream& out, Rational& a)
    {
        if(a.iDown == 1)
        {
            out << a.iUp << endl;
        }
        else
        {
            out << a.iUp << "/" << a.iDown << endl;
        }
        return out;
    }
    friend istream& operator>>(istream& in, Rational& a)
    {
        in >> a.iUp >> a.iDown;
        a.Reduce();
        return in;
    }
private:
    int iUp;
    int iDown;
    void Reduce();
    int Gcd(int l, int r);
};

Rational::Rational(int _up, int _down):
    iUp(_up), iDown(_down)
{
    Reduce();
}

int Rational::Gcd(int m, int n)
{
    int rem = n;

    while (rem != 0)
    {
        rem = m % n;
        m = n;
        n = rem;
    }

    return m;
}

void Rational::Reduce()
{
    int temp = Gcd(iUp, iDown);
    iUp = iUp / temp;
    iDown = iDown / (temp);
    if(iDown < 0)
    {
        iUp = -iUp;
        iDown = -iDown;
    }
}


int main()
{
    Rational a(1, 1), b(1, 1);
    cin >> a;
    cin >> b;

    Rational plusRes = a + b;
    Rational substract = a - b;
    Rational multiple = a * b;
    Rational divide = a / b;
    Rational pPlus = a++;
    Rational pSubstract = a--;
    Rational iPlus = ++a;
    Rational iSubstract = --a;
    Rational Negative = -a;
    cout << "a+b: ";
    cout << plusRes ;
    cout << "a-b: ";
    cout << substract;
    cout << "a*b: ";
    cout << multiple ;
    cout << "a/b: ";
    cout << divide ;
    cout << "-a: ";
    cout << Negative;
    cout << "++a: ";
    cout << iPlus ;
    cout << "--a: ";
    cout << iSubstract;
    cout << "a++: ";
    cout << pPlus ;
    cout << "a--: ";
    cout << pSubstract ;
    cout << "a<b: ";
    string res = a < b ? "true" : "false";
    cout << res << endl;
    cout << "a<=b: ";
    res = a <= b ? "true" : "false";
    cout << res << endl;
    cout << "a>b: ";
    res = a > b ? "true" : "false";
    cout << res << endl;
    cout << "a>=b: ";
    res = a >= b ? "true" : "false";
    cout << res << endl;
    return 0;
}

