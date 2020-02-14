// 例04-06-01：ex04-06-01.cpp
// 重载输入输出操作符

class CLocation
{
    double latitude, longitude;
public:
    CLocation (double lt = 0, double lg = 0)
    {
        latitude = lt;
        longitude = lg;
    }
    |\colorbox{green}{\textcolor{red}{friend ostream&}}| operator<<(|\colorbox{green}{ostream& out}|, CLocation loc);
    |\colorbox{green}{\textcolor{red}{friend istream&}}| operator>>(|\colorbox{green}{istream& in}|, CLocation|\colorbox{green}{\textcolor{red}{\textbf &}}| loc);
};

